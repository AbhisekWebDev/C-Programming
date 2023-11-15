#include <stdio.h>
#include <stdlib.h>

union abc {
    int a;
    float b;
    char c;
};

int main()
{
    union abc x;
    x.a = 10;
    x.b = 11.2356;
    x.c = 'A';
    printf("%d \n", x.a);
    printf("%f \n", x.b);
    printf("%c", x.c);
    return 0;
}
