#include <stdio.h>

// the static storage class is used to declare variables that have a fixed memory location throughout the program's execution.
// They retain their values between function calls and have a default value of zero if uninitialized.

void function() {

    // Static variable 'count' retains its value between function calls

    static int count = 0;

    // Increment and display the value of 'count'

    printf("Value of count inside function: %d\n", ++count);
}

int main()
{
    // Call the 'function()' multiple times

    function();
    function();
    function();

    return 0;
}

/*
Static variables have a lifetime throughout the program's execution and are initialized only once at the beginning of the program
unless they are explicitly re-initialized.
They are typically used when a variable needs to maintain its value between function calls or when a variable needs to retain its value
throughout the program's lifetime in a specific scope.
*/
