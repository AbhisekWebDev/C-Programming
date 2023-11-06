#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    float f = 5.5;
    char ch = '0';

    void *vp; // this void pointer can store any variable of any data type, it is used for typecasting

    //vp = &a;
    //vp = &f;
    vp = &ch;

    // this how we typecast a void pointer

    //printf("%d \n", *(int *)vp);
    //printf("%f \n", *(float *)vp);
    printf("%c \n", *(char *)vp);


    return 0;
}
