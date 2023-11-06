#include <stdio.h>
#include <stdlib.h>

// returnType functionName(arguements)

float sum(float, float);

int main()
{

    float x = sum(33.23, 45.56);

    printf("The sum is = %f", x);

    return 0;
}

float sum(float a, float b) {
    return a + b;
}
