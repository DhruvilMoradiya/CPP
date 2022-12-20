#include <stdio.h>

int main()
{
    int n;
    int fac = 1;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }

    printf("%d! = %d", n, fac);
    return 0;
}