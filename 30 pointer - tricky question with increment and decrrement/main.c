#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {10,11,-1,56,67,5,4};
    int *p, *q;
    p = a;

    // associativity of increment and decrement is from right to left

    printf("%d \n", *p);
    printf("%d %d %d \n", (*p)++, *p++, *++p);
    //(*p)++ = will increment the value not the address

    q = p + 3;

    printf("%d \n", *q - 3);
    printf("%d \n", *--p + 5);
    printf("%d", *p + *q);

    return 0;
}
