//Write a program to find the Smallest Common Divisor of a given


#include <stdio.h>

int main()
{
    int a, b, i, min;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    min = (a < b) ? a : b;

    for(i = 2; i <= min; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            printf("Smallest Common Divisor = %d", i);
            return 0;
        }
    }

    printf("No common divisor other than 1.");

    return 0;
}
