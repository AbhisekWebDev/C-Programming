#include <stdio.h>
#include <stdlib.h>

// index starts from 0

typedef enum {
    male,
    female
}gender;

int main()
{
    gender var = female;
    printf("%d", var);
    return 0;
}
