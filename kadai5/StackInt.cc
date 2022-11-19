#include "StackInt.h"

StackInt *makeStackInt(int s) {
    StackInt *si=(StackInt*)malloc(sizeof(StackInt));
    si->size=s;
    si->stack=(int*)malloc(si->size*sizeof(int));
    si->sp=0;
    return si;
}

void free(StackInt *si){
    free(si->stack);
    free((void*)si);
}

void push(StackInt *si, int n) {
    if(si->sp==si->size) {
        fprintf(stderr, "Error: stack overflow.\n");
        exit(1);
    }
    si->stack[si->sp++]=n;
}

int pop(StackInt *si) {
    if(si->sp==0) {
        fprintf(stderr, "Error: stack underflow.\n");
        exit(1);
    }
    return si->stack[--si->sp];
}

int peek(StackInt *si) {
    if(si->sp==0) {
        fprintf(stderr, "Error: stack underflow.\n");
        exit(1);
    }
    return si->stack[si->sp-1];
}

int getSize(StackInt *si) {
    return si->sp;
}

void print(StackInt *si) {
    printf("%d:", si->sp);
    for (int i=si->sp-1; i>=0; i--) {
        printf("%d ", si->stack[i]);
    }
    printf("\n");
}