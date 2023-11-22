#include <stdio.h>

// the register storage class is used to suggest that a variable should be stored in a CPU register for faster access.

int main()
{
    register int count; // Declaring 'count' as a register variable

    // Initializing and using the register variable

    for (count = 1; count <= 5; ++count)
        printf("Value of count: %d \n", count);

    return 0;
}
