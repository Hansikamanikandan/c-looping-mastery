

#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        digit = number % 10;

        if(digit % 2 == 0)
        {
            sum = sum + digit;
        }

        number = number / 10;
    }

    printf("Sum of Even Digits = %d", sum);

    return 0;
}
