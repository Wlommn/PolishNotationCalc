#ifndef LIB_LINKEDLIST_LINKEDLIST_H_
#define LIB_LINKEDLIST_LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../DEFINES.h"

typedef struct ListNode
{
    int id;
    int value;
    struct ListNode* next;
} ListNode;

typedef struct LinkedList 
{
    ListNode* first;
    ListNode* last;
    int size;
} List;

List* Initialise(List* newList);

List* AddFront(List* currentList);
List* AddEnd(List* currentList);

ListNode* FindElement(List* currentList, int value);
ListNode* FindElementID(List* currentList, int id);

List* DeleteNode(List* currentList, ListNode* node);
List* DeleteList(List* currentList);

List* CorrectListID(List* currentList);
ListNode* CreateNode(int newNodeValue, int newNodeId);
ListNode* MemmoryAllocate();
ListNode* SetValue();

#endif  //  LIB_LINKEDLIST_LINKEDLIST_H_