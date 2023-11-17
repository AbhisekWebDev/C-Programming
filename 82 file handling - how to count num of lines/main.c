#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    int count = 1;
    char ch;
    fp = fopen("abc.txt", "r");

    if(fp == NULL) {
        printf("Error");
        exit(1);
    }

    while((ch = fgetc(fp)) != EOF) {
        if(ch == '\n')
            count++;
    }

    fclose(fp);

    printf("%d", count);

    return 0;
}
