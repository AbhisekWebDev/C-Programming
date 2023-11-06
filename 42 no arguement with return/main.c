#include <stdio.h>
#include <stdlib.h>

// returnType functionName(arguements)

int sum(void);

int main()
{
    int s = sum();

    printf("The sum is = %d", s);

    return 0;
}

int sum() {
    int a = 5, b = 6;

    return a + b;

    printf("Inside the function sum"); // this line becomes unreachable because this line is written after the return statement
}
