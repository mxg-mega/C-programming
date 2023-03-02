#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    for(i = 0; i < argc; i++)
        {
            printf("%s",argv[i]);
        }
    printf("Thats it folks");
    return 0;
}
