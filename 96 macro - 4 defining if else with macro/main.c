#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b)   if(a > b) \
                        printf("a is max"); \
                    else \
                        printf("b is max");

int main()
{
    MAX(5, 6);

    return 0;
}
