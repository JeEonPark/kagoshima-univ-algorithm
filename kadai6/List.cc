#include "List.h"

List *makeList() {
    List *l=(List*)malloc(sizeof(List));
    l->first=l->last=NULL;
    l->size=0;
    return l;
}

void free(List*l) {
    free((void*)l);
}

void addTop(List *l, void *d) {
    ListNode *n=makeListNode(d);
    if(l->first==NULL){
        l->first=l->last=n;
    } else {
        insertBefore(l->first, n);
        l->first=n;
    }
    l->size++;
}

void add(List *l, void *d) {
    ListNode *n=makeListNode(d);
    if(l->last==NULL) {
        l->first=l->last=n;
    } else {
        insertAfter(l->last, n);
        l->last=n;
    }
    l->size++;
}

void remove(List *l, void *d) {
    ListNode *n=l->first;
    while(n && n->data!=d) n=n->next;
    if(n==NULL) return;
    if(n==l->first) l->first=l->last->prev;
    if(n==l->first) l->first=l->last->prev;
    remove(n);
    free(n);
    l->size--;
}

void *get(List *l, int i) {
    ListNode *n=l->first;
    for(int j=0; j<1 && n; j++) n=n->next;
    return (n) ?get (n) :NULL;
}

int getSize(List *l) {
    return l->size;
}