#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1 = NULL, *fp2 = NULL;
    int count = 1;
    char ch;
    fp1 = fopen("abc.txt", "r");
    fp2 = fopen("destination.txt", "w");

    if(fp1 == NULL) {
        printf("Error");
        exit(1);
    }

    if(fp2 == NULL) {
        printf("Error");
        exit(1);
    }

    while((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    fclose(fp1);
    fclose(fp2);

    printf("copied");

    return 0;
}
