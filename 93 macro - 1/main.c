#include <stdio.h>
#include <stdlib.h>

// scope of macro is global only

#define PI 3.145

int main()
{
    int r = 5;
    printf("%f", PI*r*r);
    return 0;
}
