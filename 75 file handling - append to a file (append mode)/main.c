#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char str[50];

    fp = fopen("abc.txt", "a"); // Open file in append mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    printf("Enter content to be appended: ");
    fgets(str, sizeof(str), stdin); // Read input safely using fgets

    fputs(str, fp); // Append the entered content to the file

    printf("Appended successfully.\n");

    fclose(fp);

    return 0;
}
