#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("abc.txt", "r"); // Open file in read mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read a single character
    ch = fgetc(fp);
    printf("%c\n", ch);

    // Read a string using fgets
    char str1[50];
    fgets(str1, sizeof(str1), fp);
    printf("%s\n", str1);

    // Reset the file pointer to the beginning
    fseek(fp, 0, SEEK_SET);

    // Read character by character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c\n", ch);
    }

    fclose(fp); // Close the file

    return 0;
}
