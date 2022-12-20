#include <stdio.h>

int main()
{
    // declared variable
    float feh;
    float cel;

    // took value from user
    printf("Enter in feh : ");
    scanf("%f", &feh);

    // doing calculations
    cel = ((feh - 32) * 5) / 9;

    // printing the output
    printf(" %f", cel);
    return 0;
}
