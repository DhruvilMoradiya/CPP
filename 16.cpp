#include <stdio.h>

int main()
{
    // declaring variables
    float radius, area, perimeter;
    // taking inputs
    printf("Enter radius : ");
    scanf("%f", &radius);
    // calculations
    area = 3.1415 * radius * radius;
    perimeter = 2 * 3.1415 * radius;
    // printing ans
    printf("Area = %f \n", area);
    printf("Perimeter = %f", perimeter);
    return 0;
}