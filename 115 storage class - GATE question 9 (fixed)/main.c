#include <stdio.h>
#include <stdlib.h>

int main()
{
    register int data = 10;

    int *piSumData = NULL;

    piSumData = (int *)malloc(sizeof(int)); // Allocate memory for piSumData

    if (piSumData != NULL) {

        *piSumData = 5;

        printf("%d", *piSumData);

        free(piSumData); // Free the allocated memory when done using it
    } else {

        printf("Memory allocation failed.");
        // Handle the case where memory allocation fails
    }

    return 0;
}
