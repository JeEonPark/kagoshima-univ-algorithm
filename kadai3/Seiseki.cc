#include "Seiseki.h"

Seiseki* makeSeiseki(const char *n, int k, int m, int r, int h) {
    Seiseki *s=(Seiseki*)malloc(sizeof(Seiseki));
    s->name=n;
    s->kokugo=k;
    s->sansuu=m;
    s->rika=r;
    s->shakai=h;
    return s;
}

void print(Seiseki *s) {
    printf("%s 国%d 算%d　理%d 社%d\n", s->name, s->kokugo, s->sansuu, s->rika, s->shakai);
}

void free(Seiseki *s) {
    free((void*)s);
}