#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is a lowercase letter\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is an uppercase letter\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit\n");
    }
    else
    {
        printf("The character is another symbol\n");
    }

    return 0;
}