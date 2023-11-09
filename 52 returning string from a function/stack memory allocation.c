#include <stdio.h>
#include <stdlib.h>

char *display();

void main()
{
    char *str = display();

    str[0] = 'a'; //

    printf("%s", str);
}

char *display() {
    char str[] = "Abhisek";
    return ; // because this is in read only memory so we cannot modify it
}

