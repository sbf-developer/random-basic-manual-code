#include <stdio.h>

int main(void)

{
    int number1, number2;
    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    if (number1 > number2)
    {
        printf("Number 1 is greater than number 2");
    }
    else if (number1 == number2)
    {
        printf("Number 1 is equal to number 2");
    }
    else
    {
        printf("Number 2 is greater than number 1");
    }
    return 0;
}