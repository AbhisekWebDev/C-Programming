#include <stdio.h>
#include <stdlib.h>

void sum(void); // function declaration

void main()
{
    sum(); // function call
}

void sum() { // function definition
    int a, b, sum = 0;
    printf("Enter 1st no. ");
    scanf("%d", &a);
    printf("Enter 2nd no. ");
    scanf("%d", &b);

    sum = a + b;
    printf("The sum of %d and %d is = %d", a, b, sum);
}
