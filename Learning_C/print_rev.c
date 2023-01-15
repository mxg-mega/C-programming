#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
    int c, r;

    c = 0;
    while(s[c] != '\0')
        {
            c++;
        }
    r = c;
    while (r >= 0)
        {
            putchar(s[r]);
            r--;
        }
    putchar('\n');
}
