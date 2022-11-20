#ifndef __QInt__h
#define __QInt__h

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *q;
    int size;
    int front, rear;
    int length;
} QInt;

QInt *makeQInt(int);
void free(QInt*);
void enq(QInt*, int);
int deq(QInt*);
int peek(QInt*);
int getSize(QInt*);
void print(QInt*);

#endif