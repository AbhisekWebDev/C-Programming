#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;
    printf("Enter total no of values : ");
    scanf("%d", &n);

    ptr = (int*)calloc(n , sizeof(int)); // calloc() takes 2 arguments

    printf("Enter values : \n");

    for(i = 0 ; i < n ; i++)
        scanf("%d", (ptr + i));

    printf("The values are : \n");

    for(i = 0 ; i < n ; i++)
        printf("%d \n", *(ptr + i));

    free(ptr);

    return 0;
}
