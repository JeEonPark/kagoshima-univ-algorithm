#ifndef __BinTreeNode__h
#define __BinTreeNode__h

#include <stdio.h>
#include <stdlib.h>

typedef struct BinTreeNodeTag {
    struct BinTreeNodeTag *parent;
    struct BinTreeNodeTag *left, *right;
    void *data;
} BinTreeNode;

BinTreeNode *makeBinTreeNode(void*);
BinTreeNode *makeBinTreeNode(void*, BinTreeNode*, BinTreeNode*);

void free(BinTreeNode*);
void setLeft(BinTreeNode*, BinTreeNode*);
void setRight(BinTreeNode*, BinTreeNode*);
void setData(BinTreeNode*, void*);

#endif