#ifndef __ListNode__h
#define __ListNode__h

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNodeTag {
    struct ListNodeTag *prev, *next;
    void *data;
} ListNode;

ListNode *makeListNode(void *);
void free(ListNode *);
void insertBefore(ListNode *, ListNode *);
void insertAfter(ListNode *, ListNode *);
void remove(ListNode *);
void *get(ListNode *);
#endif
