#include <stdio.h>
#include <stdlib.h>

void print(int n) {

    if(n < 1) return;
    else {
        printf("%d ", n);
        print(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    print(3);
    return 0;
}
