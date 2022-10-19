#ifndef LIB_PARSER_PARSER_H_
#define LIB_PARSER_PARSER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../stack/stack.h"
#include "../queue/queue.h"
#include "../DEFINES.h"

Queue* GetPostfixLexems(char* string, int stringSize);

char* ParseNumber(char* string, int* index, int stringSize);

PRIOR GetOperandPrior(char currentSimbol);
bool CheckOperators(char currentSimbol);

bool CheckNumber(char currentSimbol);
bool CheckFunctionLogarithm(char* string, int index);
// int CheckFunctionTangent(char currentSimbol);
// int CheckFunctionCotangent(char currentSimbol);
// int CheckFunctionSinus(char currentSimbol);
// int CheckFunctionCosinus(char currentSimbol);
bool CheckOpenHooks(char currentSimbol);
bool CheckCloseHooks(char currentSimbol);

#endif  //  LIB_PARSER_PARSER_H_
