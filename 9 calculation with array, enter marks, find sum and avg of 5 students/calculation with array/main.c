#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[5], i;
    float sum = 0, avg;
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &marks[i]);
    }
    for(i = 0 ; i < 5 ; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum/5;
    printf("%f", avg);
    return 0;
}
