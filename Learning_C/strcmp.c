#include <stdio.h>
#include "main.h"

int _strcmp(char *s1, char *s2)
{
    int len1, len2;

    len1 = _strlen(s1);
    len2 = _strlen(s2);

    if(len1 > len2)
    {
        return (15);
    }
    else if(len2 > len1)
    {
        return (-15);
    }
    else
    {
        return (0);
    }

}
