#include <stdio.h>
#include <stdlib.h>

// enum can be declared globally as well as locally
// it is used to assign integral constants

int main()
{
    enum xnum{c, cpp, java};

    enum xnum var;

    printf("%d", sizeof(var)); // will print 4 bytes because enum - takes only one value at a time and it of integer type hence (integral constanf)

    return 0;
}
