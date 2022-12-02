#include "ListNode.h"
// 生成
ListNode *makeListNode(void *d)
{
    ListNode *n = (ListNode *)malloc(sizeof(ListNode));
    n->prev = n->next = NULL;
    n->data = d;
    return n;
}

void free(ListNode *n)
{
    free((void *)n);
}

void insertBefore(ListNode *n1, ListNode *n2)
{
    if (n1 == NULL || n2 == NULL)
        return;
    if (n1->prev)
        n1->prev->next = n2;
    n2->prev = n1->prev;
    n2->next = n1;
    n1->prev = n2;
}

void insertAfter(ListNode *n1, ListNode *n2)
{
    if (n1 == NULL || n2 == NULL)
        return;
    if (n1->next)
        n1->next->prev = n2;
    n2->prev = n1;
    n2->next = n1->next;
    n1->next = n2;
}
void remove(ListNode *n)
{
    if (n == NULL)
        return;
    if (n->prev)
        n->prev->next = n->next;
    if (n->next)
        n->next->prev = n->prev;
    n->prev = n->next = NULL;
}

void *get(ListNode *n)
{
    return n->data;
}