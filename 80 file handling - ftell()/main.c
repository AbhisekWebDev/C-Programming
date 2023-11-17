#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch, str[50];
    int pos;
    fp = fopen("abc.txt", "r");

    if(fp == NULL) {
        printf("Error");
        exit(1);
    }

    pos = ftell(fp);
    printf("%d \n", pos);

    fseek(fp, 5, SEEK_SET);
    printf("%d \n", ftell(fp));

    ch = fgetc(fp);
    printf("%c \n", ch);

    printf("%d \n", ftell(fp));

    fscanf(fp, "%s", str);
    printf("%s \n", str);

    printf("%d \n", ftell(fp));

    fseek(fp, 0, SEEK_END); // whatever the position is, will be the length of the string
    printf("%d", ftell(fp));

    fclose(fp);

    return 0;
}
