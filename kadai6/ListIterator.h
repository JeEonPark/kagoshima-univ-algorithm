#ifndef __ListIterator__h
#define __ListIterator__h

#include "List.h"

typedef struct {
    List *list;
    ListNode *next;
} ListIterator;

ListIterator *makeListIterator(List*);
void free(ListIterator*);
int hasNext(ListIterator*);
void *next(ListIterator*);

#endif