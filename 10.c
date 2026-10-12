#include <stdio.h>

int main (void)
{
    int numbers[] = {64, 25, 12, 22, 11};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        int  min = i;

        // Find the smallest element
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = j;
            }
        }

        // Swap elements
        int temp = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%i ", numbers[i]);
    }

    printf("\n");
    return 0;
}