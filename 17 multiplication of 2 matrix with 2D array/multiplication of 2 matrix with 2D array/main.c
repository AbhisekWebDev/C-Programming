#include <stdio.h>
#include <stdlib.h>
#define N 50

int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q ;
    printf("enter 1st row and column of matrix\n");
    scanf("%d %d", &m, &n);
    printf("enter 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter 2nd row and column of matrix\n");
    scanf("%d %d", &p, &q);
    printf("enter 2nd matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d", &b[i][j]);
    }
    printf("\n1st matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n2nd matrix is\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            printf("%d\t", b[i][j]);
    }
    printf("\n");
    if(n!=p)
    {
        printf("can not be multiplied\n");
    }else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
                sum=0;
                    for(k=0;k<m;k++)
                        sum=sum+(a[i][k]*b[k][j]);
        }
        c[i][j]=sum;
    }
    printf("multiplication is\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
                printf("%d\t", c[i][j]);
        }
        printf("\n");
    return 0;
}
