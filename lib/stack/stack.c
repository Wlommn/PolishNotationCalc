#include "stack.h"

Stack* InitStack() {
    Stack* newStack = malloc(sizeof(newStack));
    if (newStack != NULL) {
        newStack->size = 0;
        newStack->top = NULL;
    }
    return newStack;
}

int PushStackItem(Stack* currentStack, char value) {
    int result = 1;
    ListNode* newNode = CreateNode(value, 1);
    newNode->next = currentStack->top;
    currentStack->top = newNode;
    if (currentStack->top == NULL) {
        result = 0;
    } else {
        currentStack->size++;
    }
    return result;
}

char PopStackItem(Stack* currentStack) {
    char value = '\0';
    if (currentStack->top != NULL) {
        ListNode* next = currentStack->top->next;
        value = currentStack->top->value;
        free(currentStack->top);
        currentStack->top = next;
        currentStack->size--;
    }
    return value;
}

void RemoveStack(Stack* currentStack) {
    while (currentStack->size > 0) {
        PopStackItem(currentStack);
    }
    free(currentStack);
}

int GetStackSize(Stack* currentStack) {
    return currentStack->size;
}
