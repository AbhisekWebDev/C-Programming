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

    printf(" for sum press - 1 \n for sub press - 2 \n for multiply press - 3 \n for division press - 4 \n for modulo press - 5 \n ");
    printf("Enter choice : ");
    scanf("%d", &choice);

    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    // using switch case

    switch(choice) {
        case 1 : sum(a, b);
        break;

        case 2 : sub(a, b);
        break;

        case 3 : mult(a, b);
        break;

        case 4 : divide(a, b);
        break;

        case 5 : modulo(a, b);
        break;

        default : printf("Enter valid choice");
    }
}
