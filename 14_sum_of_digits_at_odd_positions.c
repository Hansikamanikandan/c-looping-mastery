
#include <stdio.h>

int main()
{
    int number, digit, position = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number != 0)
    {
        digit = number % 10;

        if(position % 2 != 0)
        {
            sum = sum + digit;
        }

        position++;
        number = number / 10;
    }

    printf("Sum of Digits at Odd Positions = %d", sum);

    return 0;
}
