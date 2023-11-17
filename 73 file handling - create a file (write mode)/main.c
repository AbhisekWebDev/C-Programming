#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    // fputc
    char ch = 'A';
    fp = fopen("abc.txt", "w"); // Open file in write mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fputc(ch, fp);
    fclose(fp); // Close the file after writing 'A'

    // fputs
    char str[] = "Abhisek";
    fp = fopen("abc.txt", "a"); // Open file in append mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fputs(str, fp);
    fclose(fp); // Close the file after writing "Abhisek"

     // printing string using fputc with loop and strlen function
    for(int i = 0 ; i != strlen(str) ; i++)
        fputc(str, fp);

    fclose(fp); // Close the file after writing "Abhisek"

    // fprintf
    fp = fopen("abc.txt", "a"); // Open file in append mode

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(fp, "%c %s", ch, str);
    fclose(fp); // Close the file after writing the formatted string

    return 0;
}
