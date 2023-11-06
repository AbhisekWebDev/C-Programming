#include <stdio.h>
#include <stdlib.h>

int main() {
    int *danglingPtr;

    // Allocate memory for an integer and assign its address to the pointer

    int *validPtr = (int *)malloc(sizeof(int));
    *validPtr = 42;

    // Make the dangling pointer point to the same memory location as validPtr

    danglingPtr = validPtr;

    // Deallocate the memory pointed to by validPtr

    free(validPtr); // this is dangling pointer because after freeing the pointer it is not pointing to anywhere

    validPtr = NULL;  // Set validPtr to NULL to avoid accidental dereference

    // Attempt to access the value through the dangling pointer

    int value = *danglingPtr;

    printf("Dangling pointer value: %d\n", value);

    return 0;
}

/* A dangling pointer in C is a pointer that still holds a memory address but points to a location that has already been deallocated or is no longer valid.
Accessing or dereferencing a dangling pointer can lead to undefined behavior and program crashes */
