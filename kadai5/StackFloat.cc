#include "StackFloat.h"

StackFloat *makeStackFloat(float s) {
    StackFloat *si=(StackFloat*)malloc(sizeof(StackFloat));
    si->size=s;
    si->stack=(float*)malloc(si->size*sizeof(float));
    si->sp=0;
    return si;
}

void free(StackFloat *si){
    free(si->stack);
    free((void*)si);
}

void push(StackFloat *si, float n) {
    if(si->sp==si->size) {
        fprintf(stderr, "Error: stack overflow.\n");
        exit(1);
    }
    si->stack[si->sp++]=n;
}

float pop(StackFloat *si) {
    if(si->sp==0) {
        fprintf(stderr, "Error: stack underflow.\n");
        exit(1);
    }
    return si->stack[--si->sp];
}

float peek(StackFloat *si) {
    if(si->sp==0) {
        fprintf(stderr, "Error: stack underflow.\n");
        exit(1);
    }
    return si->stack[si->sp-1];
}

int getSize(StackFloat *si) {
    return si->sp;
}

void print(StackFloat *si) {
    printf("%d:", si->sp);
    for (int i=si->sp-1; i>=0; i--) {
        printf("%f ", si->stack[i]);
    }
    printf("\n");
}