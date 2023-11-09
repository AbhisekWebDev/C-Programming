#include <stdio.h>
#include <stdlib.h>

float sum(float, float);

int main()
{
    float s = 0;
    float (*ptr)(float, float) = &sum;
    s = (*ptr)(5.5, 7.3);
    printf("%f", s);
    return 0;
}

float sum(float a, float b) {
    return a + b;
}
