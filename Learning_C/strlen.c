#include "main.h"

int _strlen(char *s)
{
    int u;

    u = 0;
    while(s[u] != '\0')
        {
            u++;
        }
    return u;
}
