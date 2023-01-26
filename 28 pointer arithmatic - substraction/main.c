#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={50,1,-1,10,8}; //in here we can do p-q in subtraction but not in addition
    int *p = &a[0];
    int *q = &a[3];
    int d = p-q;
    printf("%d\n",d);

    printf("Hello world!\n");
    return 0;
}
