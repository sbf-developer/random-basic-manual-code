// Simple social media ranking 

#include <stdio.h>

int main(void)
{
    int likes = 100;
    int comments = 20;
    int age = 5;

    // Calculate post score
    int score = (likes * 2) + (comments * 3) - age;

    // Display result
    printf("Post score: %d\n", score);

    return 0;
}