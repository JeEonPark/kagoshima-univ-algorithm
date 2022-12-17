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

    // n1 = makeBinTreeNode(makePD("牧", 33));
    // n2 = makeBinTreeNode(makePD("石田", 27));
    // n3 = makeBinTreeNode(makePD("久永", 53), n1, n2);
    // n4 = makeBinTreeNode(makePD("川平", 48));
    // n5 = makeBinTreeNode(makePD("森", 55), n3, n4);
    // n6 = makeBinTreeNode(makePD("前田", 50));
    // n7 = makeBinTreeNode(makePD("中村", 35), n6, NULL);
    // n8 = makeBinTreeNode(makePD("今井", 66), NULL, n7);
    // n9 = makeBinTreeNode(makePD("山田", 19), n5, n8);
    

    BinTree *tree = makeBinTree(n9);

    printf("***Pre***\n");
    traverse(tree, 0,printPD);
    printf("\n");

    printf("***In***\n");
    traverse(tree, 1,printPD);
    printf("\n");

    printf("***Post***\n");
    traverse(tree, 2,printPD);
    printf("\n");

    free(tree);
}