#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char str[50], ch;
    fp = fopen("abc.txt", "w+"); // Open file in read-write mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    fputs("Abhisek", fp); // Write "Abhisek" to the file
    rewind(fp); // Move file pointer to the beginning

    // Read and print the file contents character by character
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp); // Close the file

    return 0;
}

