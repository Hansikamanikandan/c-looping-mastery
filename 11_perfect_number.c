#include <stdio.h>

int main()
{
    int number, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == number)
        printf("%d is a Perfect Number.", number);
    else
        printf("%d is not a Perfect Number.", number);

    return 0;
}
