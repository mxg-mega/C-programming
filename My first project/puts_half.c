#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{
    int u, i, n;

    u = 0;
    while(str[u] != '\0')
    {
        u++;
    }

    if(u % 2 != 0)
    {
        n = (u + 1)/2;
    }
    else if(u % 2 == 0)
    {
        n = u / 2;
    }

    for(i = n; i < (n * 2); i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
