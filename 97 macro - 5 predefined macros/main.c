#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Date : %s \n",__DATE__);
    printf("Time : %s \n", __TIME__);
    printf("File : %s \n", __FILE__);
    printf("Line : %d", __LINE__);

    return 0;
}
