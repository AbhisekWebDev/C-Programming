#include <stdio.h>
#include <stdlib.h>

extern int j;

int i = 5;

int main()
{
    printf("%d %d", i, j);

    return 0;
}
