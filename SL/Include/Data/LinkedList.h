#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Definitions/Types.h"

typedef struct Node
{
    void *data;
    struct Node* next;
} LinkedListNode;

typedef struct LinkedList
{
    LinkedListNode* head;
} LinkedList;


/**
 * Initializes the linked list
 * @param list the list you want to initialize
 */
void LLCreate(LinkedList* list);

/**
 * Add a new node to the linked list,
 * The data will be a void pointer to make the
 * linked list generic
 * @param data pointer that you want to store in the linked list
 */
void LLAppend(LinkedList* list, void* data);

/**
 * Delete a node in the linked list by index
 * @param list The list that you want to delete an element from
 * @param index which index you want to delete from the list
 */
void LLDelete(LinkedList* list, u32 index);

/**
 * Prints the whole linked list out
 * this will be mostly used for debugging purpose
 */
void LLShow();

#endif
