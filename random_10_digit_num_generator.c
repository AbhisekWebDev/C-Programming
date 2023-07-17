#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number between min and max (inclusive)
int randomInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate the first digit (always '9')
    unsigned long long phoneNumber = 9;

    // Generate the rest of the 9 digits
    for (int i = 0; i < 9; i++) {
        phoneNumber = phoneNumber * 10 + randomInRange(0, 9);
    }

    printf("Generated Phone Number: %010llu\n", phoneNumber);

    return 0;
}