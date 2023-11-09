#include <stdio.h>
#include <stdlib.h>

char *display();

void main()
{
    char *str = display();

    // str[0] = 'a';

    printf("%s", str);
}

char *display() {

    // return "Abhisek"; // this is in the read only memory so we can't modify it, we can only access it

    // char str[] = "Abhisek"; // this will not work because it is stored in the stack memory and it is local to this function so we can't modify it
    // return str;

    // static char str[] = "Abhisek"; // this will work because it is now a static variable and the lifetime of it will be throughout this prog. and we can modify it
    // return str;

    // char *str = "Abhisek"; // this will work because it is now stored in the heap memory but we can't modify it because it is in the read only memory
    // return str;
}
