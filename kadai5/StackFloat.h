#ifndef __StackFloat__h
#define __StackFloat__h

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float *stack;
    int sp;
    int size;
} StackFloat;

StackFloat *makeStackFloat(float);
void free(StackFloat*);
void push(StackFloat*, float);
void push(StackFloat*);
float pop(StackFloat*);
float peek(StackFloat*);
int getSize(StackFloat*);
void print(StackFloat*);

#endif