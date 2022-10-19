#ifndef LIB_INPUT_INPUT_H_
#define LIB_INPUT_INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../stack/stack.h"

char* Input(int* stringSize);

bool ValidationInput(char* inputedString, char* validString);

#endif  //  LIB_INPUT_INPUT_H_