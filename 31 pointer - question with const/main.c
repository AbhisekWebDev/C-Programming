#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int a = 10;
    int *p = &a;
    *p = 20;
    printf("%d \n", a);

    // this will run because the data type of pointer 'p' is not as same as the int 'a' which is const

    const int b = 30;
    const int *ptr = &b;
    *ptr = 40;
    printf("%d \n", b);

    // this will not run simply because it is of const data type and it can not be changed after declreation

    return 0;
}
