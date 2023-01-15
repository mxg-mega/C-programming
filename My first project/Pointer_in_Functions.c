#include <stdio.h>
/**
*modif_my_param - a function to modify the value of a variable in the main function
*Return: no retrun
*/
void modif_my_param(int *m)
{
    printf("the address of 'm' is: %p\n", &m);
    printf("the value of 'm' is: %p\n", m);
    *m = 402;
}
/**
*main - entry point
*Return: 0 always
*/
int main(void)
{
    int n;
    int *p;

    p = &n;
    n = 98;
    printf("the address of 'n' is: %p\n", &n);
    printf("the value of 'n' is: %d\n", n);
    printf("the value of 'p' is: %p\n", p);
    printf("the address of 'p' is: %p\n", &p);
    modif_my_param(p);
    printf("the new value of 'n' is: %d\n", n);
    return 0;
}
