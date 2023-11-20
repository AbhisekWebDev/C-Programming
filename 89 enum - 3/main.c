#include <stdio.h>
#include <stdlib.h>

// enum can be declared globally as well as locally
// it is used to assign integral constants

enum gender{male, female, other};

int main()
{
    enum gender g = female;

    if(g == male)
        printf("100%% discount");
    else if(g == female)
        printf("10000%% discount");
    else
        printf("10000000%% discount");

    return 0;
}
