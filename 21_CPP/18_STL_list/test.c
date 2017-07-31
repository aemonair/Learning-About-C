#include <stdio.h>

typedef struct A
{
}A;

int main()
{
    A a;
    printf("%d _ %d\n", sizeof(A), sizeof(a));
}
