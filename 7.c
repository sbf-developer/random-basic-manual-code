#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));

    int secret = rand() % 10 + 1;
    int guess;

    printf("Guess a number (1-10): ");
    scanf("%d", &guess);

    if (guess == secret)
    {
        printf("Correct!\n", secret);
    }
    else
    {
        printf("Wrong! The number was %d\n", secret);
    }
    
    return 0;

}