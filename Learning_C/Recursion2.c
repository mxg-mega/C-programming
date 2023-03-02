#include <stdio.h>
#include "main.h"
/**
*_puts_ - a recursive function that prints a string
*@s - a pointer to an character (string)
*/

void _puts_(char *s)
{
    if(*s == '\0')
    {
        putchar('\n');
    }
    else
    {
        printf("%p\n", s);
        printf("%p\n", s);
        putchar(s[0]);
        _puts_(s + 1);
    }

}
