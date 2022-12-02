#ifndef __PScore__h
#define __PScore__h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int a[4];
} PD;

PD *makePD(const char*, int[]);
PD *makePD(char*, int);
void free(PD*);
void print(PD*);

#endif