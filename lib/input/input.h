#ifndef LIB_INPUT_INPUT_H_
#define LIB_INPUT_INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../stack/stack.h"

#define VALID_STRING "0123456789sinctlo-+^"

char* Input(int* stringSize);

char* ValidationInput(char* inputString, int inputStingSize, char* validString);

#endif  //  LIB_INPUT_INPUT_H_