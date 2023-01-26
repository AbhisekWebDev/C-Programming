#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;
    char name [30];
    printf("enter name");
    gets(name);
    count = strlen(name);
    printf(" length of string is %d", count);
    return 0;
}
