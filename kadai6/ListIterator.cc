#include "ListIterator.h"

ListIterator *makeListIterator(List *l)
{
    ListIterator *it =
        (ListIterator *)malloc(sizeof(ListIterator));
    it->list = l;
    it->next = NULL;
    return it;
}

void free(ListIterator *it)
{
    free((void *)it);
}

int hasNext(ListIterator *it)
{
    if (it->next == NULL)
    {
        it->next = it->list->first;
        return 1;
    }

    if (it->next->next)
    {
        it->next = it->next->next;
        return 1;
    }
    it->next = NULL;
    return 0;
}

void *next(ListIterator *it)
{
    return get(it->next);
}