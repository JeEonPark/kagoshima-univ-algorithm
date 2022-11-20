#include "QInt.h"

QInt *makeQInt(int s){
    QInt *qi=(QInt*)malloc(sizeof(QInt));
    qi->size=s;
    qi->q=(int*)malloc(qi->size*sizeof(int));
    qi->front=1;
    qi->rear=0;
    qi->length=0;
    return qi;
}

void free(QInt *qi) {
    free(qi->q);
    free((void*)qi);
}

void enq(QInt *qi, int n) {
    if(qi->length==qi->size) {
        fprintf(stderr, "Error: queue overflow.\n");
        exit(1);
    }
    qi->q[(++qi->rear)%qi->size]=n;
    qi->length++;
}

int deq(QInt *qi) {
    if(qi->length==qi->size) {
        fprintf(stderr, "Error: queue overflow.\n");
        exit(1);
    }
    qi->length--;
    return qi->q[(qi->front++)%qi->length];
    
}

int peek(QInt *qi) {
    if(qi->length==0) {
        fprintf(stderr, "Error: queue underflow.\n");
        exit(1);
    }
    return qi->q[qi->front%qi->size];
}

int getSize(QInt *qi) {
    return qi->length;
}

void print(QInt *qi) {
    printf("%d:", qi->length);
    for(int i=0; i<qi->length; i++) {
        printf("%d ", qi->q[(qi->front+i)%qi->size]);
    }
    printf("\n");
}