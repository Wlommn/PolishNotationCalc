#ifndef LIB_STACK_STACK_H_
#define LIB_STACK_STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../linkedList/linkedList.h"
#include "../DEFINES.h"

struct stack {
    int size;
    int value;
    struct stack* next;
};


#endif  //  LIB_STACK_STACK_H_