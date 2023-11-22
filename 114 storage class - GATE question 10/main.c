#include <stdio.h>
#include <stdlib.h>

// A NULL pointer, which leads to undefined behavior and may cause a segmentation fault or crash.
// Dereferencing a pointer that's initialized to NULL (i.e., a null pointer) leads to accessing memory that your program doesn't own.
// We need to allocate memory for piSumData before dereferencing it.

/*
int main()
{
    int data = 10;

    int *piSumData = NULL;

    *piSumData = 5;

    printf("%d", *piSumData);

    return 0;
}
*/

// Here's the corrected version:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data = 10;

    int *piSumData = NULL;

    piSumData = (int *)malloc(sizeof(int)); // Allocate memory for piSumData

    if (piSumData != NULL) {

        *piSumData = 10;

        printf("%d", *piSumData);

        free(piSumData); // Free the allocated memory when done using it
    } else {

        printf("Memory allocation failed.");
        // Handle the case where memory allocation fails
    }

    return 0;
}
