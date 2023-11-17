#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("abc.txt", "r+"); // Open file in read-write mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    fputs("Kumar", fp); // Write "Kumar" to the file

    fclose(fp); // Close the file

    return 0;
}
