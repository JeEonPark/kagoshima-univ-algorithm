#include "ListPD.h"

ListPD *makeListPD() {
    ListPD *lp = (ListPD*)malloc(sizeof(ListPD));
    lp->first = lp->last = NULL;
    lp->size = 0;
    return lp;
}

void free(ListPD *lp) {
    free((void*)lp);
}

void insert(ListPD *lp, PD *pd){
    if(lp->first == NULL) {
        lp->first = lp->last = pd;
    } else {
        insertBefore(lp->first, pd);
        lp->first = pd;
    }
    lp->size++;
}

void add(ListPD *lp, PD *pd) {
    if(lp->last == NULL) {
        lp->first = lp->last = pd;
    } else {
        insertAfter(lp->last, pd);
        lp->last = pd;
    }
    lp->size++;
}

void remove(ListPD *lp, PD *pd){
    if(lp->first == pd) {
        lp->first = pd->next;
    }
    if(lp->last == pd) {
        lp->last = pd->prev;
    }
    remove(pd);
    lp->size--;
}

PD *get(ListPD *lp, int n) {
    PD *p = lp->first;
    for(int i=0; i<n && p; i++) {
        p = p->next;
    }

    return p;
}

int getSize(ListPD *lp) {
    return lp->size;
}

void print(ListPD *lp) {
    printf("ListPD:(%d) : ", lp->size);
    PD *p=lp->first;

    for(int i = 1; p; p = p->next, i++) {
        printf("%d : ", i);
        print(p);
        if(p->next != NULL) {
            printf(" - ");
        }
    }
    printf("\n");
}