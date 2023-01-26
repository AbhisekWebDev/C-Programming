#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[5], arr2[5], sumArr[5], i;
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0 ; i < 5 ; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
        printf("sumarray element at index %d = %d\n", i, sumArr[i]);
    }

}
