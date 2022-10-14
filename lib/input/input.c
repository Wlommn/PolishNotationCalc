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
