#include <stdio.h>
#include <stdlib.h>

void sum(int, float); // function declaration

void main()
{
    sum(10, 23.89); // function call
}

void sum(int a, float b) { // function definition
    float sum = 0;

    sum = a + b;
    printf("The sum of %d and %f is = %f", a, b, sum);
}


// function declaration and function definition are known as parameters / formal parameters
// function call is known as arguments / actual parameters
