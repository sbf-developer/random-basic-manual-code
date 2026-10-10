#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is the greatest number");
    }
    else if (b > a && b > c)
    {
        printf("b is the greatest number");
    }
    else
    {
        printf("c is the greatest number");
    }
    return 0;
}

