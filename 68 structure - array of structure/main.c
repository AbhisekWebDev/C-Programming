#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[10];
    float marks;
};

int main()
{
    struct student s[3];

    printf("Enter roll, name and marks : \n");
    for(int i = 0 ; i < 3 ; i++)
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);

    printf("The roll, name and marks are : \n");
    for(int i = 0 ; i < 3 ; i++)
        printf("%d %s %f \n", s[i].roll, s[i].name, s[i].marks);

    return 0;
}
