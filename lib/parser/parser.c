#include "parser.h"

int CheckNumber(char currentSimbol) {
    int result = FALSE;

    if (strchr(VALID_NUMBERS, currentSimbol) != NULL) {
        result = TRUE;
    }
    return result;
}

int CheckFunctionLogarithm(char currentSimbol) {

}

int CheckFunctionTangent(char currentSimbol) {
    
}

int CheckFunctionCotangent(char currentSimbol) {
    
}

int CheckFunctionSinus(char currentSimbol) {
    
}

int CheckFunctionCosinus(char currentSimbol) {
    
}

int ChecHooks(char currentSimbol) {

}