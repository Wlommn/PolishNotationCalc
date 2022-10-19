#include "input.h"

char* Input(int* stringSize) {
    char* result = malloc(sizeof(char));
    char currentSimbol = '\0';
    int i = 1;
    while (((currentSimbol = getchar()) != '\n') && currentSimbol != EOF) {
        result = realloc(result, (sizeof(result) + i) * sizeof(char));
        result[i - 1] = currentSimbol;
        i++;
    }
    fflush(NULL);
    *stringSize = i;
    return result;
}

bool ValidationInput(char* inputedString, char* validString) {
    bool result = true;
    int stringSize = (int)strlen(inputedString);
    for (int i = 0; i < stringSize; i++) {
        if (strchr(validString, inputedString[i]) == NULL) {
            result = false;
            break;
        }
    }
    return result;
}
