#include <stdio.h>
#include <stdlib.h>

void modify(char[], char[]);

int main()
{
    char str1[] = "Abhisek";
    char str2[] = "kumar";

    modify(str1, str2);

    return 0;
}

void modify(char str1[], char str2[]) {

    // finding length of string using loop

    int len = 0;

    for(int i = 0 ; i < str1[i] != '\0' ; i++)
        len++;

    printf("length of str1 = %d \n", len);

    // finding length of string using strlen

    printf("length of str2 = %d \n", strlen(str2));

    // modify small k with capital K

    str2[0] = 'K';

    printf("%s \n", str1);
    printf("%s ", str2);
}

