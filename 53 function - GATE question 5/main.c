#include <stdio.h>
#include <stdlib.h>

void f(int *p, int *q) {

    p = q;
    *p = 2;
}

int i = 0, j = 1; // global variable - lifetime of this will be throughout this prog.

int main()
{
    f(&i, &j);

    printf("%d %d", i, j);

    getchar();

    return 0;
}


