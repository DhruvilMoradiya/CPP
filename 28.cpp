#include <stdio.h>

int main()
{
    int i, a[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    };

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    };
    return 0;
}