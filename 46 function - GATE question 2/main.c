#include <stdio.h>
#include <stdlib.h>

// what will be the output of j?

int incr(int i) {

    static int count = 0;
    count = count + i;

    return count;
}

int main()
{
    int i, j;

    for(i = 0 ; i <= 4 ; i++)
        j = incr(i);

    printf("%d \n", j);
    return 0;
}

// Ans. - 10
