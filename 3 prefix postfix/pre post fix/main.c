#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b, c, d;
    b = ++a;
    c = a++;
    d = ++a;
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);
    return 0;
}
