#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        print_int(a[i]);
        if(i != (n - 1))
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
}
