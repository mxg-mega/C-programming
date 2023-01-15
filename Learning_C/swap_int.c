#include "main.h"

void swap_int(int *a, int *b)
{
    int fnum, snum;
    fnum = *a;
    snum = *b;
    *a = snum;
    *b = fnum;
}
