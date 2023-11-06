#include <stdio.h>

int main() {
    int *wildPtr;  // Declare a wild pointer without initialization

    // Attempt to access the value through the wild pointer
    int value = *wildPtr;

    printf("Wild pointer value: %d\n", value);

    return 0;
}

/* A wild pointer in C is a pointer that has not been initialized or points to an unpredictable memory location.
Using a wild pointer can lead to undefined behavior and can result in program crashes or incorrect behavior */
