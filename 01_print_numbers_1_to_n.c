#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter the value of N: ");
    scanf("%d", &number);

    printf("Numbers from 1 to %d are:\n", number);

    for(i = 1; i <= number; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
