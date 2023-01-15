#include "main.h"
#include <stdio.h>
void _puts(char *str)
{
    int c;

    for (c = 0; str[c]; c++)
        {
            putchar(str[c]);
        }
    putchar('\n');
}
