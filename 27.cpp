#include <stdio.h>

int main()
{
    int n;

    printf("Enter two digit number : ");
    scanf("%d", &n);

    if ((n % 10) % 2 == 0)
    {
        printf("Last digit of %d is even", n);
    }
    else
    {
        printf("Last digit of %d is not even", n);
    }
    return 0;
}