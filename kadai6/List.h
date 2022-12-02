#ifndef __List__h
#define __List__h

#include "ListNode.h"

typedef struct {
    ListNode *first, *last;
    int size;
} List;

List *makeList();
void free(List*);
void addTop(List*, void*);
void add(List*, void*);
void remove(List*, void*);
void *getFirst(List*);
void *getLast(List*);
void *get(List*, int);
int getSize(List*);


#endif