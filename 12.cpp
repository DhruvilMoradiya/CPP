#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // taking 3 numbers from user
    printf("Enter 3 numbers with space between them : \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // calculating

    if (num1 > num2 && num1 > num3) // checking if num1 is bigger than num 2 or num 3
    {
        printf("%d is the biggest number.", num1);
    }
    else if (num2 > num3) // checking if num 2 is bigger than num3
    {
        printf("%d is the biggest number.", num2);
    }
    else // for num3 we dont have to check because num 1 and num 2 is less than num 3
    {
        printf("%d is the biggest number.", num3);
    }
    return 0;
}