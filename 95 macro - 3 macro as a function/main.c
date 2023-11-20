#include <stdio.h>
#include <stdlib.h>

#define MUL(a, b) a*b

#define MUL1(x, y) x*y

int main()
{
    printf("%d \n",  MUL(2, 5));

    printf("%d",  MUL1(5-2, 7+4));

    return 0;
}
