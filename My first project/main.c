#include <stdio.h>
#include <stdlib.h>

void  print_triangle(void);
int main()
{
    printf("Hello world!\n");
    pointers();
    return 0;
}
void pointers(void)
{
    int i;
    int *p;
    char c;
    char *pp;

    p = &i;
    c = 'H';
    pp = &c;

    printf("the size of int on my computer is : %lu\n", sizeof(int));
    printf("the size of char on my computer is : %lu\n", sizeof(char));
    printf("the size of long int on my computer is : %lu\n", sizeof(long));
    printf("the size of float on my computer is : %lu\n", sizeof(float));
    printf("the size of double on my computer is : %lu\n", sizeof(double));
    printf("the size of variable 'i' on my computer is : %lu\n", sizeof(i));
    i = 30;
    printf("the value the pointer 'p' on my computer is : %p\n", p);
    printf("the value of 'c' on my computer is : %c\n", c);
    printf("the value of 'pp' on my computer is : %p\n", pp);
    printf("the address of 'c' on my computer is : %p\n", &c);
    printf("the address of pointer 'pp' on my computer is : %p\n", &pp);
    printf("the address of 'i' on my computer's memory is : %p\n", &i);
    printf("value of 'i' is : %d\n\n", i);
    *p = 20;
    *pp = 'o';
    printf("the value of i on my computer is : %d\n", i);
    printf("the address of 'p' on my computer is : %p\n", &p);
    printf("the value of 'c' on my computer is : %c\n", c);
    printf("the size of 'pp' on my computer is : %lu\n", sizeof(pp));
    printf("the size of the pointer 'p' on my computer is : %lu\n", sizeof(p));
}
