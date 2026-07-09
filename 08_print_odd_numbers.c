#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter the value of N: ");
    scanf("%d", &number);

    printf("Odd Numbers:\n");

    for(i = 1; i <= number; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}
