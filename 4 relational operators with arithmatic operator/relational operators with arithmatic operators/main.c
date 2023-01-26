#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 18, b, c, d, e = 10, f;
    c = b ++;
    d = b;
    f = a > b > d > c;
    /* a = 18, b = 10, c = 9, d = 10, e = 10 */
    printf("%d", a < b < c > d);
    printf("%d", b == e);
    printf("%d", c + 1 > e);
    printf("%d", a + c == b > e < c + d);
    printf("%d", f != 1);
    return 0;
}
