#include <stdio.h>
#include <stdlib.h>

// linker error

int i = 5;

int main()
{
    extern int j;

    printf("%d %d", i, j);

    int j = 10;

    return 0;
}
