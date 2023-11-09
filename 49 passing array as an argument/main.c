#include <stdio.h>
#include <stdlib.h>

// both call by value and call by reference is used

// call by value - int a

// call by reference - int marks[]

int avg(int[], int);

int main()
{
    int average, size, marks[] = {10,15,20,30,45};

    size = sizeof(marks) / sizeof(marks[0]);

    average = avg(marks, size);
    printf("%d", average);

    return 0;
}

int avg(int marks[], int a) {

    int sum = 0, average = 0;

    for(int i = 0 ; i < a ; i++)
        sum += marks[i];

    average = sum / a;

    return average;
}
