#include <stdio.h>

#include "support.h"

void display() {

    extern int x;

    x++;

    printf("support file\n");

    printf("x - %d\n", x);
}
