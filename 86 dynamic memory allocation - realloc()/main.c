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

    printf("Enter updated total no of values : ");
    scanf("%d", &n);

    int ptr1 = (int*)realloc(ptr, n * sizeof(int)); // realloc() takes 2 arguments - 1 previous pointer & 2 new size

    if(ptr1 == NULL) {
        printf("Memory reallocation failed. Exiting...");
        free(ptr);
        return -1;
    }

    printf("Previous address : %p \n", ptr);
    printf("New address : %p \n", ptr1);

    printf("The values are : \n");

    for(i = 0 ; i < n ; i++)
        printf("%d \n", *(ptr + i));

    free(ptr1);

    return 0;
}
