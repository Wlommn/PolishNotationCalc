#include "input.h"

char* Input(int* stringSize) {
    char* result = malloc(sizeof(char));
    char currentSimbol = '\0';

    int i = 1;

    while (currentSimbol != '\n' || currentSimbol != EOF) {
        currentSimbol = getchar();
        result = realloc(result, (sizeof(result) + i) * sizeof(char));
        result[i - 1] = currentSimbol;
        i++;
    }
    *stringSize = i;
    return result;
}

char* ValidationInput(char* inputString, int inputStingSize, char* validString) {
    char* result = inputString;
    int validStringSize = (int)strlen(validString);
    int find = 0;
    for (int i = 0; i < inputStingSize; i++) {
        for (int j = 0; j < validStringSize; j++) {
            if (inputString[i] == validString[j]) {
                find += 1;
                break;
            }
        }
        if (find != 0) {
            find = 0;
        } else {
            result = NULL;
            break;
        }
    }
    return result;
}
