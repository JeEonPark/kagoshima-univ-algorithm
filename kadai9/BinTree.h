#ifndef __BinTree__h
#define __BinTree__h

#include "BinTreeNode.h"

typedef struct {
    BinTreeNode *root;
} BinTree;

BinTree *makeBinTree();
BinTree *makeBinTree(BinTreeNode*);
void free(BinTree*);
void setRoot(BinTree*, BinTreeNode*);
void traverse(BinTree*, int, void(*)(void*));

#endif