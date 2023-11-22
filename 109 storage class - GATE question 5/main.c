#include <stdio.h>
#include <stdlib.h>

// linker error

int main()
{
    extern int i;

    printf("%d \n", i);

    {
        int i = 10;

        printf("%d \n", i);
    }

    return 0;
}
