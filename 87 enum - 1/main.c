#include <stdio.h>
#include <stdlib.h>

// enum can be declared globally as well as locally
// it is used to assign integral constants

enum week{sun, mon, tue, wed, thu, fri, sat};

int main()
{
    enum week today = mon;
    printf("%d", today); // output - 1

    return 0;
}
