#include <stdio.h>
#include <stdlib.h>

void sum(void);

void main()
{
    sum();
}

void sum() {
    int a = 5, b = 6;

    printf("The sum of %d and %d is = %d", a, b, a + b);
}
