#import <stdio.h>
#include "main.h"
/*this program prints an array of 10 elements
*Starting from 0 to 90
*/
void array(void);
void f(int *a);
int main(void)
{
    int *p;
    int b[10];

    p = b;
    printf("b: %p\n", b);
    printf("address of first element of array 'b' : %p\n", &b[0]);
    printf("p: %p\n", p);
    printf("size of the array is : %lu\n", sizeof(b));
    f(b);
    printf("the array element 1 : %d\n", b[0]);
    array();
    return 0;
}
void array(void)
{
    int a[10];
    int k;

    for (k = 0; k < 10; k++)
    {
        a[k] = k * 10;
        printf("%d", a[k]);
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
    printf("the address of the first element is: %p\n", &a[0]);
    printf("the address of the pointer is the same as its first element : %p", &a);
}
void f(int *a)
{
    printf("a: %p\n", a);
}
