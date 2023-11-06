#include <stdio.h>

int main() {
    int *intPtr = NULL;
    char *charPtr = NULL;

    if (intPtr == NULL) {
        printf("intPtr is a NULL pointer.\n");
    } else {
        printf("intPtr is not a NULL pointer.\n");
    }

    if (charPtr == NULL) {
        printf("charPtr is a NULL pointer.\n");
    } else {
        printf("charPtr is not a NULL pointer.\n");
    }

    return 0;
}


/* A NULL pointer in C is a pointer that does not point to any valid memory location.
It's often used to indicate that a pointer doesn't reference any meaningful data.
It's used with Data Structure And malloc and calloc*/
