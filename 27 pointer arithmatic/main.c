#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={0,1,-1,10,11}; //addition
    int *p=&a;
    printf("%d\n", *p);
    p=p+2;
    printf("%d\n", *p);
    p=p+1;
    *p=2;
    printf("%d", *p);
    return 0;
}
