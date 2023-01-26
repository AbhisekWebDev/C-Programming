#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len1, len2, i;
    char s1[30] = "ABHISEK ";
    char s2[10] = "KUMAR";
    len1 = strlen(s1);
    len2 = strlen(s2);
    for(i=0;i<=len2;i++)
        s1[len1+i]=s2[i];
    printf("%s", s1);
    return 0;
}
