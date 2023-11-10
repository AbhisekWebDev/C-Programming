#include <stdio.h>

// Function to calculate factorial using recursion

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

// the factorial function is defined to calculate the factorial of a given number n using recursion.
// The base case is when n is 0 or 1, in which case the factorial is 1. Otherwise, it recursively calls itself with n-1 multiplied by n.
// The main function takes user input for the number and then calls the factorial function to calculate and display the result.
