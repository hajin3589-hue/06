#include <stdio.h>

void square1(int a)
{
    a = a * a;
}

int square2(int a)
{
    return (a * a);
}

int main(void)
{
    int a = 2;

    square1(a);
    printf("a = %i\n", a);

    a = square2(a);
    printf("a = %i\n", a);

    return 0;
}