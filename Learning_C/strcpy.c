#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
    int i;

    for(i = 0; i < _strlen(src); i++)
    {
        dest[i] = src[i];
    }
    putchar('\n');

    return dest;
}
