#include <stdio.h>

int main()
{
    float length, width, area, perimeter;

    printf("Enter length and width : ");
    scanf("%f %f", &length, &width);

    area = length * width;
    perimeter = (length + width) * 2;

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);
    return 0;
}