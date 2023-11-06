#include <stdio.h>
#include <stdlib.h>

void f(int *p, int m) {

    m = m + 5;
    *p = *p + m;
}

int main()
{
    int i = 5 , j = 10;
    f(&i, j);
    printf("%d", i + j);
    return 0;
}
