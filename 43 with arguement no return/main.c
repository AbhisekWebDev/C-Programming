#include <stdio.h>
#include <stdlib.h>

// returnType functionName(arguements)

void sum(int, int); // in declareation the data type is must but variable name is optional

void main()
{
    int a, b;
    printf("Enter 1st no : ");
    scanf("%d", &a);
    printf("Enter 2nd no : ");
    scanf("%d", &b);

    sum(a, b);
}

void sum(int a, int b) { // in definition the data type and variable name is must

    int sum = a + b;

    printf("The sum of %d and %d is = %d", a, b, sum);
}
