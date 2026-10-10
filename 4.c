#include <stdio.h>
#include <math.h>

// Calculator to perform basic arithmetic operations
int main(void)
 {
    double num1, num2;
    char operator;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    switch (operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
 }

