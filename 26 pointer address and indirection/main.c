#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 9, c;
    int *p, *q;
    p = &a;
    q = &b;
    *p = 20;
    c = *p;
    printf("value of a = %d\n", a);
    printf("value of a = %d\n", *p);
    printf("address of a = %d\n", &a);
    printf("address of a = %d\n", p);
    printf("address of p = %x\n", &p);
    printf("c = %d", c);
    return 0;
}
