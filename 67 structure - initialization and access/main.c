#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include string.h for strcpy and strcmp functions

struct student {
    int roll;
    char name[20];
    float marks;
} s = {1, "Abhi", 98.65};

int main()
{
    // these are compile time initialization

    struct student s1, s3;
    struct student s2 = {2, "Abhinav", 99.99};
    s1 = s2;
    printf("%s \n", s1.name); // s1 - is object name, . - is dot operator/member operator, name - is member name (syntax - objectName.memberName)
    s.marks = 9.2;
    printf("%f \n", s.marks);

    // we cannot assign a string literal directly to an array. Instead, we should use the strcpy function from the <string.h> header to copy the string.
    // s.name = "Abhisek";

    // Correct way to assign a string to an array
    strcpy(s.name, "Abhisek");
    printf("%s \n", s.name);


    // this is runtime initialization

    printf("Enter info for s3 : ");
    printf("Enter roll : ");
    scanf("%d", &s3.roll);
    printf("Enter name : ");
    scanf("%s", &s3.name);
    printf("Enter marks : ");
    scanf("%f", &s3.marks);

    printf("%d %s %f \n", s3.roll, s3.name, s3.marks);


    // we can compare individual members

    if(s1.roll < s3.roll)
        printf("yo \n");


    // we can compare individual strings using strcmp function

    int result = strcmp((char*)s1.name, (char*)s3.name);
    printf("%d\n", result);
    if (result == 0) {
        printf(" %s - s1.name and %s - s3.name are equal.\n", s1.name, s3.name);
    } else if (result < 0) {
        printf("%s - s1.name comes before %s - s3.name.\n", s1.name, s3.name);
    } else {
        printf("%s - s1.name comes after %s - s3.name.\n", s1.name, s3.name);
    }

    return 0;
}
