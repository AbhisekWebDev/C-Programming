#include <stdio.h>
#include <stdlib.h>

// tail recursion

void print(int a) {
    if(a < 1) return;
    else {
        printf("%d", a);
        print(a / 2);
    }
}

int main()
{
    print(10);
    return 0;
}
