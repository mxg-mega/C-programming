#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i, j, k;

    j = _strlen(dest);
    for(i = 0; i < (j + 1); i++)
    {
        if(dest[i] == '\0')
        {
            dest[i] = ' ';
        }
    }
    for(k = 0; src[k] != '\0'; k++)
        dest[k + j + 1] = src[k];

    return (dest);

}
