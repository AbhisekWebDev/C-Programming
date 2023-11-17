#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("abc.txt", "r");

    if(fp == NULL) {
        printf("Error");
        exit(1);
    }

    fseek(fp, 8, SEEK_SET);
    ch = fgetc(fp);
    printf("%c \n", ch);

    fseek(fp, -5, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c \n", ch);

    fseek(fp, -3, SEEK_END);
    ch = fgetc(fp);
    printf("%c", ch);

    fclose(fp);

    return 0;
}
