#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[] = "Welcome to the dark side";
    char *p = string;

    printf("%c \n", *p);
    printf("%c \n", *(p++ + 1));
    printf("%c \n", *(p-- + 5) + 3);
    printf("%c \n", *(++p + 10) - 32);
    printf("%c %c %c", *p, *++p, *--p);

    return 0;
}
