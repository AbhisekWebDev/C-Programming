#include <stdio.h>
#include <stdlib.h>

// non-tail recursion but looks like tail recursion - tricky

int print(int a) {
    if(a < 1) return;
    else return 1 + print(a / 2);
}

int main()
{
    int x = print(10);
    printf("%d", x);
    return 0;
}
