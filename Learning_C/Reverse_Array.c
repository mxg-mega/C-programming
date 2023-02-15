#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
    int i, j;


    i = sizeof(a)/sizeof(int);
    j = i - n;
    while(j < i)
    {
        print_int(a[i]);
        i--;

        putchar(',');
        putchar(' ');

    }

    putchar('\n');
}
