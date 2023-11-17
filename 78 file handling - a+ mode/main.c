#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("abc.txt", "a+"); // Open file in append/update mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END); // Move the file pointer to the end of the file

    fputs("Kumar", fp); // Write "Kumar" at the end of the file

    fclose(fp); // Close the file

    return 0;
}
