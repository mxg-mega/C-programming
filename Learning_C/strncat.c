#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    j = _strlen(dest);
    i = 0;
    while(i < n)
    {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';

    return (dest);
}
