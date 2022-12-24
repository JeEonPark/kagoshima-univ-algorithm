#ifndef __BinSearchTree__h
#define __BinSearchTree__h

#include "BinTree.h"

void *search(BinTree*, void*, int(*comp) (void*, void*));
void insert(BinTree*, void*, int(*comp) (void*, void*));
void *remove(BinTree*, void*, int(*comp) (void*, void*));

#endif