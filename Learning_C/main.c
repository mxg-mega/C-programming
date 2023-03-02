#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    char s1[98];
    char s2[98] = "Hello ";
    /*char s3[] = "World!";
    char *str, *ptr, *ctr, *htr;
    int array[6];
    int *ktr;*/
    _puts_reverse(s2);
    printf("%d \n", factorial(4));
/*
    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    array[5] = 14503;

    print_array(array, 6);

    reverse_array(array, sizeof(array)/sizeof(int));

    str = "hello world";
    puts_half(str);
    puts2(str);

    ptr = _strcpy(s1, "first, solve the problem. then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);

    ctr = _strncat(s2, s3, 3);
    printf("%s\n", ctr);
    printf("%s\n", s3);
    printf("%s\n", s2);
    htr = _strncat(s2, s3, 3);
    printf("%s\n", ctr);
    printf("%s\n", s3);
    printf("%s\n", s2);

    ktr = _strcmp(ptr, str);
    printf("%d\n", ktr);*/
    return 0;
}
