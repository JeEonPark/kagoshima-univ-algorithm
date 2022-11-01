#ifndef __PD__h
#define __PD__h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct PDtag {
    struct PDtag *prev, *next;
    char *name;
    int age;
} PD;

PD *makePD(const char*, int);
void free(PD*);
void insertBefore(PD*, PD*);
void insertAfter(PD*, PD*);
void remove(PD*);
void print(PD*);

#endif