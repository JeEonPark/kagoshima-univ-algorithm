#include "BinSearchTree.h"

BinTreeNode *prev;

void *search(BinTree *tree, void *key, int (*comp)(void *, void *))
{
    BinTreeNode *n = tree->root;
    prev = NULL;
    while (n)
    {
        int c = comp(key, n->data);
        prev = n;
        if (c == 0)
            return n->data;
        n = (c < 0) ? n->left : n->right;
    }
    return NULL;
}
void insert(BinTree *tree, void *key, int (*comp)(void *, void *))
{
    if (search(tree, key, comp))
        return;
    BinTreeNode *n = makeBinTreeNode(key);
    if (!prev)
    {
        tree->root = n;
    }
    else if (comp(key, prev->data) < 0)
    {
        setLeft(prev, n);
    }
    else
    {
        setRight(prev, n);
    }
}

BinTreeNode *removeMin(BinTreeNode *n)
{
    while (n->left)
    {
        n = n->left;
    }
    if (n->parent->left == n)
    {
        setLeft(n->parent, n->right);
    }
    else
    {
        setRight(n->parent, n->right);
    }
    return n;
}

void *remove(BinTree *tree, void *key, int (*comp)(void *, void *))
{
    if (!search(tree, key, comp))
    {
        return NULL;
    }
    if (!prev->left && !prev->right)
    {
        if (prev->parent == NULL)
        {
            tree->root = NULL;
        }
        else if (prev->parent->left == prev)
        {
            prev->parent->left = NULL;
        }
        else
        {
            prev->parent->right = NULL;
        }
    }
    else if (!prev->right)
    {
        if (prev->parent == NULL)
        {
            tree->root = prev->left;
        }
        else if (prev->parent->left == prev)
        {
            setLeft(prev->parent, prev->left);
        }
        else
        {
            setRight(prev->parent, prev->left);
        }
    }
    else if (!prev->left)
    {
        if (prev->parent == NULL)
        {
            tree->root = prev->right;
        }
        else if (prev->parent->left == prev)
        {
            setLeft(prev->parent, prev->right);
        }
        else
        {
            setRight(prev->parent, prev->right);
        }
    }
    else
    {
        BinTreeNode *min = removeMin(prev->right);
        if (prev->parent == NULL)
        {
            tree->root = min;
        }
        else if (prev->parent->left == prev)
        {
            setLeft(prev->parent, min);
        }
        else
        {
            setRight(prev->parent, min);
        }
        setLeft(min, prev->left);
        setRight(min, prev->right);
    }

    void *dn = prev->data;
    free(prev);
    return dn;
}