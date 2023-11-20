#include <stdio.h>

#define VERSION_ONE

int main()
{
    #ifdef VERSION_ONE
        printf("This is version one.\n");

    #else

        #ifndef VERSION_TWO
            printf("This is version two.\n");

        #endif

    #endif



    #define NUMBER 10

    #if NUMBER == 5
        printf("Number is equal to 5.\n");

    #elif NUMBER == 10
        printf("Number is equal to 10.\n");

    #else
        printf("Number is not 5 or 10.\n");

    #endif

    return 0;
}

// Explanation:

/*

#ifdef checks if a macro is defined.
#ifndef checks if a macro is not defined.
#if allows conditional compilation based on an expression.
#else is an alternate condition to be executed if the previous condition fails.
#elif is an alternative condition that will be checked if the previous condition is false.
#endif is used to close each conditional block and ensure the compiler knows where each block ends, allowing for proper interpretation of the code.

In this example, when VERSION_ONE is defined, it will print "This is version one."
If VERSION_ONE is not defined and VERSION_TWO is also not defined, it will print "This is version two."
The #if directives check the value of the NUMBER macro and print different messages based on its value.

*/
