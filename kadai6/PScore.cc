#include "PScore.h"

PD *makePD(const char *n, int sc[])
{
    return makePD((char *)n, sc);
}

PD *makePD(char *n, int sc[])
{
    PD *pd = (PD *)malloc(sizeof(PD));
    int l = strlen(n);
    pd->name = (char *)malloc(l + 1);
    strcpy(pd->name, n);
    pd->a[0] = sc[0];
    pd->a[1] = sc[1];
    pd->a[2] = sc[2];
    pd->a[3] = sc[3];
    return pd;
}

void free(PD *pd)
{
    free(pd->name);
    free((void *)pd);
}

void print(PD *pd)
{
    printf("%s(%d, %d, %d, %d)", pd->name, pd->a[0], pd->a[1], pd->a[2], pd->a[3]);
}

