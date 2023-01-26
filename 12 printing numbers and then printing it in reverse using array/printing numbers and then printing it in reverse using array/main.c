#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], i;
    printf("enter the array element");
    for(i = 0 ; i < 5 ; i++)
        scanf("%d", &a[i]);
    for(i = 0 ; i < 5 ; i++)
        printf("\n array element at index %d = %d", i , a[i]);
        //for reversing it
    for(i = 4 ; i >= 0 ; i--)
        printf("\n array element at index %d = %d", i , a[i]);
}
