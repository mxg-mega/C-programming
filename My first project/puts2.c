#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
    int u, i;

    u = 0;
    while(str[u] != '\0')
    {
        u++;
    }

    i = 0;
    while(i < u)
    {
        if(i % 2 == 0)
        {
            putchar(str[i]);
        }
        i++;
    }
    putchar('\n');
}
