#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {3,2,67,0,56,32,98,66,85,47};
    int *p;
    p = a;

    // associativity of increment and decrement is from right to left

    printf("%d \n", *p++);
    printf("%d \n", *p);
    printf("%d \n", *++p);
    printf("%d \n", *++p, *++p);
    printf("%d \n", *p++, *p++);
    printf("%d \n", *++p, *p++);
    printf("%d \n", *p--);
    printf("%d \n", *p);
    printf("%d \n", *--p);
    printf("%d \n", *--p, *--p);
    printf("%d \n", *p--, *p--);
    printf("%d \n", *--p, *p--);


    return 0;
}
