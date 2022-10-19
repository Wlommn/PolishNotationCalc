#include "queue.h"

Queue* InitQueue() {
    Queue* queue = malloc(sizeof(*queue));
    if (queue!= NULL) {
        queue->size = 0;
        queue->head = NULL;
        queue->tail = NULL;
    }
    return queue;
}

void Enqueue(Queue* queue, char* value) {
    Node* prev = queue->tail;
    queue->tail = CreateQueueNode(value);
    if (queue->head == NULL) {
        queue->head = queue->tail;
    } else {
        prev->next = queue->tail;
    }
    queue->size++;
}

char* Dequeue(Queue* queue) {
    char* value;
    Node* prev = NULL;
    if (queue->size != 0) {
        value = queue->head->value;
        prev = queue->head->next;
        free(queue->head);
        queue->head = prev;
        queue->size--;
    }
    return value;
}

void FreeQueue(Queue* queue) {
    while (queue->size > 0) {
        Dequeue(queue);
    }
    free(queue);
}

int GetQueueSize(Queue* queue) {
    return queue->size;
}

Node* CreateQueueNode(char* newNodeValue) {
    Node* newNode = NodeMemmoryAllocate();
    newNode->value = newNodeValue;
    newNode->next = NULL;
    return newNode;
}

Node* NodeMemmoryAllocate() {
    Node* current = malloc(sizeof(Node));
    return current;
}
