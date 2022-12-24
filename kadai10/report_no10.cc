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

    insert(tree, makePD("aa", 33), comparePDage);
    insert(tree, makePD("bb", 12), comparePDage);
    insert(tree, makePD("cc", 23), comparePDage);
    insert(tree, makePD("dd", 85), comparePDage);
    insert(tree, makePD("ee", 45), comparePDage);
    insert(tree, makePD("ff", 30), comparePDage);
    insert(tree, makePD("gg", 65), comparePDage);
    insert(tree, makePD("hh", 22), comparePDage);
    insert(tree, makePD("ii", 10), comparePDage);
    insert(tree, makePD("jj", 83), comparePDage);

    
    printf("Original Tree:\n"); print(tree, printPD);

    PD *pd1=makePD("anyone", 45);
    PD *pd2=(PD*) remove(tree, pd1, comparePDage);
    printf("Remove 1:\n"); print(tree, printPD);

    pd1=makePD("anyone", 85);
    pd2=(PD*) remove(tree, pd1, comparePDage);
    printf("Remove 2:\n"); print(tree, printPD);

    pd1=makePD("anyone", 12);
    pd2=(PD*) remove(tree, pd1, comparePDage);
    printf("Remove 3:\n"); print(tree, printPD);

    insert(tree, pd2, comparePDage);
    printf("Insert 1:\n"); print(tree, printPD);
}