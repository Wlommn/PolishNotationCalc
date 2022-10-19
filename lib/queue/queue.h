#ifndef LIB_QUEUE_QUEUE_H_
#define LIB_QUEUE_QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../DEFINES.h"

typedef struct Node
{
    char* value;
    struct Node* next;
} Node;

typedef struct Queue
{
    Node* head;
    Node* tail;
    int size;
} Queue;


Queue* InitQueue();

void Enqueue(Queue* queue, char* value);

char* Dequeue(Queue* queue);
void FreeQueue(Queue* queue);

int GetQueueSize(Queue* queue);

Node* CreateQueueNode(char* value);
Node* NodeMemmoryAllocate();

#endif  //  LIB_QUEUE_QUEUE_H_
