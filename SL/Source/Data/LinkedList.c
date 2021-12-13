#include "Data/LinkedList.h"

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void LLCreate(LinkedList *list)
{
    list->head = NULL;
}

void LLAppend(LinkedList *list, void *data)
{
    LinkedListNode* node = malloc(sizeof(LinkedListNode));
    node->data = data;
    node->next = NULL;

    if(!list->head)
    {
        printf("@LLAppend => Head is NULL");
    }

}

void LLDelete(LinkedList *list, u32 index)
{

}

void LLShow()
{

}
