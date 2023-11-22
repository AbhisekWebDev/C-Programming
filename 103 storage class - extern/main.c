#include <stdio.h>

void fun1();
void fun2();

int main()
{
    extern int x;

    printf("main function with extern keyword - %d \n", x);

    fun1();
    fun2();

    return 0;
}

void fun1() {
    int x = 1;
    x += 5;
    printf("function 1 - x = %d \n", x);
}

void fun2() {
    int y = 4;
    y++;
    printf("function 2 - y = %d", y);
}

int x = 10; // global variable
