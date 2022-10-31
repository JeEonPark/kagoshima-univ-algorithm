#ifndef __Seiseki__h
#define __Seiseki__h
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *name;
    int kokugo;
    int sansuu;
    int rika;
    int shakai;
} Seiseki;

Seiseki* makeSeiseki(const char*, int, int, int, int);
void print(Seiseki*);
void free(Seiseki*);

#endif