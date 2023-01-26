#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s1[]="ABHisEk";
    for(i=0;s1[i]!='\0';i++)
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]=s1[i]-32;
    printf("%s", s1);
    return 0;
}
