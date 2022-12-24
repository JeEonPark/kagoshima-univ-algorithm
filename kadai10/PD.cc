#include "PD.h"

PD *makePD(const char *n, int a) {
    return makePD((char*)n, a);
}

PD *makePD(char *n, int a) {
    PD *pd = (PD*)malloc(sizeof(PD));
    int l = strlen(n);
    pd->name = (char*)malloc(l + 1);
    strcpy(pd->name, n);
    pd->age = a;
    return pd;
}

void free(PD *pd) {
    free(pd->name);
    free((void*)pd);
}

// void insertBefore(PD *pd1, PD *pd2) {
//     if(pd1 == NULL || pd2 == NULL) {
//         return;
//     }
//     if(pd1->prev) {
//         pd1->prev->next = pd2;
//     }
//     pd2->prev=pd1->prev;
//     pd2->next=pd1;
//     pd1->prev=pd2;
// }

// void insertAfter(PD *pd1, PD *pd2) {
//     if(pd1 == NULL || pd2 == NULL) return;
//     if(pd1->next) {
//         pd1->next->prev=pd2;
//     }
//     pd2->prev=pd1;
//     pd2->next=pd1->next;
//     pd1->next=pd2;
// }

// void remove(PD *pd) {
//     if(pd == NULL) return;
//     if(pd->prev){
//         pd->prev->next=pd->next;
//     }
//     if(pd->next) {
//         pd->next->prev=pd->prev;
//     }
//     pd->prev=pd->next=NULL;
// }

void print(PD *pd) {
    printf("%s(%d)", pd->name, pd->age);
}