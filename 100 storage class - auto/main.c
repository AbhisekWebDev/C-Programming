#include <stdio.h>

void function() {

    auto int a = 10; // 'auto' is optional here, as it's the default for local variables

    printf("The value of 'a' inside function: %d \n", a);
}

int main()
{
    auto int b = 20; // 'auto' is optional here, as it's the default for local variables

    printf("The value of 'b' inside main: %d \n", b);

    function();

    return 0;
}

/*
Both a and b have automatic storage duration by default,
meaning they exist only within their respective enclosing blocks (function() and main())
and are destroyed when the control exits those blocks.
*/
