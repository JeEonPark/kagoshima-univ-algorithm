#ifndef __StackInt__h
#define __StackInt__h

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *stack;
    int sp;
    int size;
} StackInt;

StackInt *makeStackInt(int);
void free(StackInt*);
void push(StackInt*, int);
void push(StackInt*);
int pop(StackInt*);
int peek(StackInt*);
int getSize(StackInt*);
void print(StackInt*);

#endif