#include "Sort.h"

void sortBubble(void *d0, int n, int (*comp)(void *, void *))
{
    void **d = (void **)d0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > 1; j--)
        {
            if (comp(d[j - 1], d[j]) > 0)
            {
                void *t = d[j];
                d[j] = d[j - 1];
                d[j - 1] = t;
            }
        }
    }
}

void SortSelection(void *d0, int n, int (*comp)(void *, void *))
{
    void **d = (void **)d0;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (comp(d[j], d[min]) < 0)
            {
                min = j;
            }
        }
        void *t = d[i];
        d[i] = d[min];
        d[min] = t;
    }
}

void sortInsertion(void *d0, int n, int (*comp)(void *, void *))
{
    void **d = (void **)d0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0 && comp(d[j - 1], d[j]) > 0; j--)
        {
            void *t = d[j];
            d[j] = d[j - 1];
            d[j - 1] = t;
        }
    }
}