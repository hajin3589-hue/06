#include <stdio.h>

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int get_integer(void)
{
    int num;

    printf("input a number: ");
    scanf("%i", &num);

    return num;
}

int main(void)
{
    int n, r;
    int result;

    n = get_integer();
    r = get_integer();

    if (n < 0 || r < 0 || r > n)
    {
        printf("Invalid input\n");
        return 0;
    }

    result = combination(n, r);

    printf("C(%i, %i) = %i\n", n, r, result);

    return 0;
}