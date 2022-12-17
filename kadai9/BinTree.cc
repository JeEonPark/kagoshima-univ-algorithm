#include "BinTree.h"

BinTree *makeBinTree() {
    BinTree *t = (BinTree*)malloc(sizeof(BinTree));
    t->root = NULL;
    return t;
}

BinTree *makeBinTree(BinTreeNode *r) {
    BinTree *t = (BinTree*)malloc(sizeof(BinTree));
    t->root = r;
    return t;
}

void traversePreOrder(BinTreeNode *n, void(*func)(void*)) {
    func(n->data);
    if(n->left) traversePreOrder(n->left, func);
    if(n->right) traversePreOrder(n->right, func);
}

void traverseInOrder(BinTreeNode *n, void(*func)(void*)) {
    if(n->left) traverseInOrder(n->left, func);
    func(n->data);
    if(n->right) traverseInOrder(n->right, func);
}

void traversePostOrder(BinTreeNode *n, void(*func)(void*)) {
    if(n->left) traversePostOrder(n->left, func);
    if(n->right) traversePostOrder(n->right, func);
    func(n->data);
}

void traversePostOrderNode(BinTreeNode *n, void(*func)(void*)){
    if(n->left) traversePostOrderNode(n->left, func);
    if(n->right) traversePostOrderNode(n->right, func);
    func(n);
}

void freeBinTreeNode(void *n) {
    free((BinTreeNode*)n);
}

void free(BinTree *t) {
    traversePostOrderNode(t->root, freeBinTreeNode);
    free((void*)t);
}

void setRoot(BinTree *t, BinTreeNode *r) {
    t->root = r;
}

void traverse(BinTree *t, int m, void(*func) (void*)) {
    switch(m) {
        case 0: traversePreOrder(t->root, func); break;
        case 1: traverseInOrder(t->root, func); break;
        case 2: traversePostOrder(t->root, func); break;
    }
}