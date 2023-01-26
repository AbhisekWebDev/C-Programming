#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 6, result1, result2;
    result1 = a-- && ++b;
    result2 = --a && ++b;
    printf("%d\n", result1);
    printf("%d", result2);
    return 0;
}
