#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    gets(name);
    printf("%10.5s", name);
    puts(name);
    puts(name);
    return 0;
}
