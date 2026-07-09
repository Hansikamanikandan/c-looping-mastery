/*
===============================================
Program 07 : Armstrong Number
===============================================
Description : This program checks whether a
              given number is an Armstrong
              number or not.

Author      : Hansika Manikandan
Language    : C
===============================================
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while(number != 0)
    {
        count++;
        number = number / 10;
    }

    number = originalNumber;

    while(number != 0)
    {
        digit = number % 10;
        sum = sum + pow(digit, count);
        number = number / 10;
    }

    if(sum == originalNumber)
        printf("%d is an Armstrong Number.", originalNumber);
    else
        printf("%d is not an Armstrong Number.", originalNumber);

    return 0;
}
