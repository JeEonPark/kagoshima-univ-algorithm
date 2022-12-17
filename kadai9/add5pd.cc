#include "BinTree.h"
#include "PD.h"

void printPD(void* v) {
    PD *pd = (PD*)v;
    print(pd);
    printf(" - ");
}

PD *addPD(char *n, int a){
    if(a >= 40) {
        return makePD(n, a+5);
    } else {
        return makePD(n, a);
    }
}

int main() {
    BinTreeNode *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8, *n9;
    n1 = makeBinTreeNode(addPD("石田", 27));
    n2 = makeBinTreeNode(addPD("牧", 33), NULL, n1);
    n3 = makeBinTreeNode(addPD("川平", 48));
    n4 = makeBinTreeNode(addPD("久永", 53), n2, n3);
    n5 = makeBinTreeNode(addPD("前田", 50));
    n6 = makeBinTreeNode(addPD("中村", 35), n5, NULL);
    n7 = makeBinTreeNode(addPD("今井", 66), n6, NULL);
    n8 = makeBinTreeNode(addPD("森", 55), n4, n7);
    n9 = makeBinTreeNode(addPD("山田", 19), n8, NULL);
    
    BinTree *tree = makeBinTree(n9);

    printf("***Pre***\n");
    traverse(tree, 0,printPD);
    printf("\n");

    free(tree);
}