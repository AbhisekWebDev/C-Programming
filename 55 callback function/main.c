#include <stdio.h>
#include <stdlib.h>

// function pointer is used in callback function
// callback function is only possible using function pointer

void sum(int a, int b) {

    printf("%d \n", a + b);
}

void sub(int a, int b) {

    printf("%d", a - b);
}

void display(void (*fptr)(int, int)) { // function pointer - in display function

    (*fptr)(5, 1);
}

void main()
{
    // function as an argument - in display function

    display(&sum);
    display(&sub);
}
