#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a & b :");
    scanf("%d %d", &a, &b);

    for (int i = a; i < b; i++)
    {
        if (i % 13 == 0 && i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}