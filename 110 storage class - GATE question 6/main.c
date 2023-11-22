#include <stdio.h>
#include <stdlib.h>

// no linker error

int main()
{
    extern int i;

    printf("%d \n", i);

    {
        printf("%d \n", i);
    }

    return 0;
}

int i = 10;
