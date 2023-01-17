#ifndef __Sort__h
#define __Sort__h

#include <stdio.h>
#include <stdlib.h>

void sortBubble(void *, int, int (*)(void *, void *));
void sortSelection(void *, int, int (*)(void *, void *));
void sortInsertion(void *, int, int (*)(void *, void *));

#endif