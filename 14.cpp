#include <stdio.h>

int main()
{
    // declaring variables
    int n, sum = 0;
    int i;

    // taking n from user
    printf("Enter n:");
    scanf("%d", &n);

    // doing loop
    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    };
    // printing ans
    printf("Sum = %d", sum);
    return 0;
}