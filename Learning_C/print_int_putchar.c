#include <stdio.h>
#include "main.h"

void printint(int n)
{
    if(n < 0)
    {
        putchar('-');
        n = -n;
    }

    if(n/10)
        printint(n/10);

    putchar((n % 10) + '0');
}
