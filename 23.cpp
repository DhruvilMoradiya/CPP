#include <stdio.h>

int factorial(int);

int main()
{
    int n, r, npr;

    printf("Enter a number n\n");
    scanf("%d", &n);
    printf("Enter a number r\n");
    scanf("%d", &r);

    npr = factorial(n) / factorial(n - r);
    printf("Value of %dP%d = %d\n", n, r, npr);
    return 0;
}

int factorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}