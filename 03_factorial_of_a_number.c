

#include <stdio.h>

int main()
{
    int number, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %lld", factorial);

    return 0;
}
