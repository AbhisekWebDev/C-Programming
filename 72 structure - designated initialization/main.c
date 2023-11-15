#include <stdio.h>
#include <stdlib.h>

struct question {
    int a;
    float b;
    char c;
    float d;
    int e;
};

int main()
{
    struct question q = { .c = 'A', .b = 3, .d = 9, .a = 1, .e = 7};
    printf("%d %f %c %f %d", q.a, q.b, q.c, q.d, q.e);
    return 0;
}
