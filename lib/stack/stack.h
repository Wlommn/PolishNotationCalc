#ifndef LIB_STACK_STACK_H_
#define LIB_STACK_STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../linkedList/linkedList.h"
#include "../DEFINES.h"

typedef struct Stack {
    ListNode* top;
    int size;
} Stack;


Stack* InitStack();

int PushStackItem(Stack* currentStack, char value);
char PopStackItem(Stack* currentStack);

void RemoveStack(Stack* currentStack);

int GetStackSize(Stack* currentStack);

#endif  //  LIB_STACK_STACK_H_