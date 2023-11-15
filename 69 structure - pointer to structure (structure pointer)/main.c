#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[10];
    float marks;
};

struct student s = {1, "Abhisek"};

int main()
{
    struct student *ptr = &s;
    printf("roll is %d", ptr->roll);
    return 0;
}
