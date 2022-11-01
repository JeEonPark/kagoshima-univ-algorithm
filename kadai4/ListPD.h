#ifndef __ListPD__h
#define __ListPD__h

#include "PD.h"

typedef struct {
    PD *first, *last;
    int size;
} ListPD;

ListPD *makeListPD();
void free(ListPD*);
void insert(ListPD*, PD*);
void add(ListPD*, PD*);
void remove(ListPD*, PD*);
PD *get(ListPD*, int);
int getSize(ListPD*);
void print(ListPD*);

#endif