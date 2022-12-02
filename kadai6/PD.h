#ifndef __PD__h
#define __PD__h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    int age;
} PD;

PD *makePD(const char*, int);
PD *makePD(char*, int);
void free(PD*);
void print(PD*);

#endif