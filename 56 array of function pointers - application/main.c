#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b) {

    printf("%d \n", a + b);
}

void sub(int a, int b) {

    printf("%d \n", a - b);
}

void mult(int a, int b) {

    printf("%d \n", a * b);
}

void divide(int a, int b) {

    printf("%d \n", a / b);
}

void modulo(int a, int b) {

    printf("%d", a % b);
}


void main()
{
    int choice, a, b;

    // array of function pointers
    void (*fptr[10])(int, int) = {sum, sub, mult, divide, modulo};

    printf("Enter choice from 0 to 4 : ");
    scanf("%d", &choice);

    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    // function pointer - function calling
    (*fptr[choice])(a, b);
}
