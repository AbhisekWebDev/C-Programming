#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a [3][3], i, j, sR, sC;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d", &a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        sR=sC=0;
        for(j=0;j<3;j++)
        {
            sR=sR+a[i][j];
            sC=sC+a[j][i];
        }
        printf("sum of row = %d, sum of column = %d", sR, sC);
    }
    return 0;
}
