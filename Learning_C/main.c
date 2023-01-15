#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    char s1[98];
    char s2[98] = "Hello";
    char s3[] = "World!";
    char *str, *ptr, *ctr;
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    array[5] = 14503;

    print_array(array, 6);

    str = "hello world";
    puts_half(str);
    puts2(str);

    ptr = _strcpy(s1, "first, solve the problem. then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);

    ctr = _strcat(s2, s3);
    printf("%s\n", ctr);
    printf("%s\n", s3);
    printf("%s\n", s2);

    return 0;
}
