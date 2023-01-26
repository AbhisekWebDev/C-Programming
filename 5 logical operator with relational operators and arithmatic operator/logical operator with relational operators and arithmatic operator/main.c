#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 15, b = 5, result1, result2, result3;
    result1 = a == b && b < a;
    result2 = a > b && b != 10 && b < 11 && a > 5;
    result3 = a < b || b == 4;
    printf("%d", result1, result2, result3);
    return 0;
}
