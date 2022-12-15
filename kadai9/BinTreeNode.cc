#include "BintreeNode.h"

BinTreeNode *makeBinTreeNode(void *d) {
    BinTreeNode *n=(BinTreeNode*)malloc(sizeof(BinTreeNode));
    n->data = d;
    n->parent = n->left = n->right = NULL;
    return n;
}

BinTreeNode *makeBinTreeNode(void *d, BinTreeNode *nl, BinTreeNode *nr) {
    BinTreeNode *n = (BinTreeNode*)malloc(sizeof(BinTreeNode));
    n->data = d;
    n->parent = NULL;
    setLeft(n, nl);
    setRight(n, nr);
    return n;
}

void free(BinTreeNode *n) {
    free((void*)n);
}

void setLeft(BinTreeNode *n, BinTreeNode *l) {
    n->left = l;
    if(l) l->parent=n;
}

void setRight(BinTreeNode *n, BinTreeNode *r) {
    n->right = r;
    if(r) r->parent=n;
}

void setData(BinTreeNode *n, void *d) {
    n->data = d;
}