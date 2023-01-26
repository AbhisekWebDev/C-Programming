#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0, i = 0;
    char name [30] = "abhisek kumar";
    for( ; name[i] != '\0' ; i++)
        count ++;
    printf("%d", count);
    return 0;
}
