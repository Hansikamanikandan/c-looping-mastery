

#include <stdio.h>

int main()
{
    int number, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1)
    {
        printf("%d is not a Prime Number.", number);
        return 0;
    }

    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        printf("%d is a Prime Number.", number);
    else
        printf("%d is not a Prime Number.", number);

    return 0;
}
