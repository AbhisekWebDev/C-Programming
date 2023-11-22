#include <stdio.h>
#include <stdlib.h>

// No output because register puts the data in ram and has no address so we can not use the pointer here to access the data

int main()
{
    register int data = 10;

    int *piSumData = NULL;

    *piSumData = 5;

    printf("%d", *piSumData);

    return 0;
}

// Attempting to assign a value to a pointer piSumData that points to NULL.
// This action leads to undefined behavior because you're trying to dereference a NULL pointer, similar to the previous example.

// However, in your code, the variable data is declared as register int data = 10;.
// The register keyword is a hint to the compiler to store the variable in a CPU register for faster access.

// It's important to note that using register is just a suggestion to the compiler, and the compiler may choose to ignore it.
// Regarding the issue with piSumData being dereferenced when it's NULL, you should allocate memory for the pointer before assigning a value to it
