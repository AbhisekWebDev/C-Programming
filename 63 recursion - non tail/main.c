#include <stdio.h>
#include <stdlib.h>

// non-tail recursion

void print(int a) {
    if(a < 1) return;
    else {
        printf("%d", a);
        print(a / 2);
        printf("%d", a);
    }
}

int main()
{
    print(10);
    return 0;
}
