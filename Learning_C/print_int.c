#include "main.h"
#include <stdio.h>

void print_int(int n)
{
    int divisor, i, j, remainder;

    if(n < 0)
    {
        putchar('-');
        n = -n;
    }

    divisor = 1;
    while((n / divisor) > 9)
    {
        divisor = divisor * 10;
    }

    remainder = n;
    i = divisor;
    while(i > 1)
    {
        j = remainder / i;
        putchar('0' + j);
        remainder = n % i;
        i /= 10;
    }
    putchar((n % 10) + '0');
}
