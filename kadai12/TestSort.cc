#include "Sort.h"
#include "PD.h"

int N = 6;

int comp(void *d1, void *d2)
{
    PD *pd1 = (PD *)d1;
    PD *pd2 = (PD *)d2;
    return pd1->age - pd2->age;
}

void print(PD **d, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%s(%d)-", d[i]->name, d[i]->age);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    PD *data[N];
    data[0] = makePD("A", 18);
    data[1] = makePD("B", 55);
    data[2] = makePD("C", 33);
    data[3] = makePD("D", 27);
    data[4] = makePD("E", 65);
    data[5] = makePD("F", 12);

    print(data, N);
    sortBubble(data, N, comp);
    print(data, N);
}