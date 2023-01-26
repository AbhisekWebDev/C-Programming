#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, i;
    char s1[30],c;
    printf("enter a satring\n");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }
    printf("%s\n",s1);
    return 0;
}
