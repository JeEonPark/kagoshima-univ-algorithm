#include "StackFloat.h"

int main(void) {
    printf("*** Reverse Polish Notation Calculator ***\n");

    StackFloat *sf=makeStackFloat(100);

    int end_flag=0;
    float n1, n2;
    char buf[100];
    while(!end_flag) {
        if(scanf("%s", buf) !=1) break;
        switch(buf[0]) {
            case '+': n2=pop(sf); n1=pop(sf); push(sf, n1+n2); break;
            case '-': n2=pop(sf); n1=pop(sf); push(sf, n1-n2); break;
            case '*': n2=pop(sf); n1=pop(sf); push(sf, n1*n2); break;
            case '/': n2=pop(sf); n1=pop(sf); push(sf, n1/n2); break;
            case '=': printf("%f\n", peek(sf)); break;
            case 'p': print(sf); break;
            case 'q': end_flag=1; break;
            default : push(sf, atof(buf));
        }
    }
    free(sf);
}