#include "ListPD.h"

int main(void) {
    PD *pd1 = makePD("yamada", 19);
    PD *pd2 = makePD("mori", 50);
    PD *pd3 = makePD("danaka", 23);
    PD *pd4 = makePD("park", 41);

    ListPD *lp = makeListPD();
    print(lp);

    add(lp, pd1);
    add(lp, pd2);
    add(lp, pd3);
    print(lp);
    
    insert(lp, pd4);
    print(lp);
    
    remove(lp, pd2);
    print(lp);
    

    printf("Number 2 is ");
    print(get(lp, 1));
    printf("\n");
}