#ifndef LIB_PARSER_PARSER_H_
#define LIB_PARSER_PARSER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../stack/stack.h"
#include "../DEFINES.h"

bool CheckNumber(char currentSimbol);
bool CheckFunctionLogarithm(char* string, int index);
int CheckFunctionTangent(char currentSimbol);
int CheckFunctionCotangent(char currentSimbol);
int CheckFunctionSinus(char currentSimbol);
int CheckFunctionCosinus(char currentSimbol);
int ChecHooks(char currentSimbol);

#endif  //  LIB_PARSER_PARSER_H_
