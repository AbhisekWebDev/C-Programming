#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    int pos;
    fp = fopen("abc.txt", "r+");

    if(fp == NULL) {
        printf("Error");
        exit(1);
    }


    fseek(fp, 5, SEEK_SET);

    while(!feof(fp)) {
        ch = fgetc(fp);
        printf("%c \n", ch);
    }

    rewind(fp);

    while(!feof(fp)) {
        ch = fgetc(fp);
        printf("%c \n", ch);
    }

    fclose(fp);

    return 0;
}
