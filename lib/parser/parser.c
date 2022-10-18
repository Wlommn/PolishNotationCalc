#include "parser.h"

char* ParseNumber() {
}

bool CheckNumber(char currentSimbol) {
    bool result = false;

    if (strchr(IS_NUMBER, currentSimbol) != NULL) {
        result = true;
    }
    return result;
}

bool CheckFunctionLogarithm(char* string, int index) {
    bool result = false;
    char subString[2] = {string[index], string[index + 1]};
    if (strcmp(subString, "ln") == 0) {
        result = true;
    }
    return result;
}

// int CheckFunctionTangent(char currentSimbol) {
    
// }

// int CheckFunctionCotangent(char currentSimbol) {
    
// }

// int CheckFunctionSinus(char currentSimbol) {
    
// }

// int CheckFunctionCosinus(char currentSimbol) {
    
// }

// int ChecHooks(char currentSimbol) {

// }