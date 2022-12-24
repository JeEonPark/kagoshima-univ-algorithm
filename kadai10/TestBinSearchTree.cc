#include "BinSearchTree.h"
#include "PD.h"

int comparePDage(void *p1, void *p2) {
    PD *pd1=(PD*)p1;
    PD *pd2=(PD*)p2;
    return pd1->age - pd2->age;
}

void printPD(void *p) {
    PD *pd=(PD*)p;
    print(pd);
}

int main(int argc, char **argv) {
    BinTree *tree=makeBinTree();
    insert(tree, makePD("aa", 44), comparePDage);
    insert(tree, makePD("bb", 18), comparePDage);
    insert(tree, makePD("cc", 55), comparePDage);
    insert(tree, makePD("dd", 33), comparePDage);
    insert(tree, makePD("ee", 27), comparePDage);
    insert(tree, makePD("ff", 60), comparePDage);
    insert(tree, makePD("gg", 53), comparePDage);
    insert(tree, makePD("hh", 10), comparePDage);

    PD *pd1=makePD("anyone", 18);

    printf("1:\n"); print(tree, printPD);
    PD *pd2=(PD*) remove(tree, pd1, comparePDage);
    printf("2:\n"); print(tree, printPD);
    insert(tree, pd2, comparePDage);
    printf("3:\n"); print(tree, printPD);
}