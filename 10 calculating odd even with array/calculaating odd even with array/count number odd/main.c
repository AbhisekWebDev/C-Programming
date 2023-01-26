#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i;
    int even = 0, odd = 0;
    for(i = 0; i < 10 ; i++)
    {
        scanf("%d", &a[i]);
    if(a[i]%2 == 0)
        even++;
    else
        odd++;
    }
    printf("even = %d", even);
    printf("odd = %d", odd);
}

