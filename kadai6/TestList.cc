#include "PD.h"
#include "List.h"
#include "ListIterator.h"

void print(List *list) {
    printf("List(%d):\n", getSize(list));
    int i=1;
    ListIterator *it=makeListIterator(list);
    while(hasNext(it)) {
        PD *pd((PD*)next(it));
        printf("%d:", i);
        print(pd);
        printf(" - ");
        i++;
    }
    printf("\n");
}

int main(void) {
    List *list=makeList();

    PD *pd1=makePD("a", 21);
    PD *pd2=makePD("b", 34);
    PD *pd3=makePD("c", 50);
    PD *pd4=makePD("d", 18);
    PD *pd5=makePD("e", 33);
    
    add(list, pd1);
    add(list, pd2);
    add(list, pd3);
    addTop(list, pd4);
    add(list, pd5);
    printf("*** Before ***\n");
    print(list);

    remove(list, pd2);

    printf("*** After ***\n");
    print(list);

    PD *pd=(PD*)get(list, 2);
    printf("3番目は"); print(pd);
}