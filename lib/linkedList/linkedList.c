#include "linkedList.h"

List* InitList(List* newList) {
    newList = malloc(sizeof(List));
    newList->first = CreateNode(DEFAULT_VALUE, 1);
    newList->last = newList->first;
    newList->size = 1;
    return newList;
}

List* AddFront(List* currentList) {
    ListNode* newNode = CreateNode(DEFAULT_VALUE, 1);
    newNode->next = currentList->first;
    currentList->size++;
    currentList->first = newNode;
    currentList = CorrectListID(currentList);
    return currentList;
}

List* AddEnd(List* currentList) {
    ListNode* newNode = CreateNode(DEFAULT_VALUE, currentList->last->id + 1);
    currentList->last->next = newNode;
    currentList->last = newNode;
    currentList->size++;
    currentList = CorrectListID(currentList);
    return currentList;
}

ListNode* FindElement(List* currentList, char value) {
    ListNode* currentNode = currentList->first;

    for (; currentNode != NULL; currentNode = currentNode->next) {
        if (value == currentNode->value) {
            break;
        }
    }
    return currentNode;
}

ListNode* FindElementID(List* currentList, int id) {
    ListNode* currentNode = currentList->first;

    for (; currentNode != NULL; currentNode = currentNode->next) {
        if (id == currentNode->id) {
            break;
        }
    }
    return currentNode;
}

List* DeleteNode(List* currentList, ListNode* node) {
    if (node->id == 1) {
        currentList->first = node->next;
    } else {
        ListNode* previous = FindElementID(currentList, node->id - 1);
        previous->next = node->next;
    }
    free(node);
    currentList->size--;
    currentList = CorrectListID(currentList);
    return currentList;
}

List* DeleteList(List* currentList) {
    for (int i = currentList->size; i > 0; i--) {
        currentList = DeleteNode(currentList, currentList->first);
    }
    free(currentList);
    return NULL;
}

List* CorrectListID(List* currentList) {
    ListNode* currentNode = currentList->first;
    for (int i = 1; i <= currentList->size; i++) {
        currentNode->id = i;
        currentNode = currentNode->next;
    }
    return currentList;
}

ListNode* CreateNode(char newNodeValue, int newNodeId) {
    ListNode* newNode = MemmoryAllocate();
    newNode->value = newNodeValue;
    newNode->id = newNodeId;
    newNode->next = NULL;
    return newNode;
}

ListNode* MemmoryAllocate() {
    ListNode* current = malloc(sizeof(ListNode));
    return current;
}

ListNode* SetValue(ListNode* node, char newValue) {
    node->value = newValue;
    return node;
}
