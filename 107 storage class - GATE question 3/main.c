#include <stdio.h>
#include <stdlib.h>

int a, b, c = 0;

int main()
{
    static int a = 1;

    prtfun();

    a += 1;

    prtfun();

    printf("%d %d \n", a, b);

    return 0;
}

void prtfun(){

    static int a = 2;

    int b = 1;

    a += ++b;

    printf("%d %d \n", a, b);
}
