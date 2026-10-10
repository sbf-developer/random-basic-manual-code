// Press enter to start, press enter to stop, then time is shown

#include <stdio.h>
#include <time.h>

int main(void)
{
    printf("Press Enter to start...");
    getchar();

    time_t start = time(NULL);

    printf("Press Enter to stop...");
    getchar();

    time_t end = time(NULL);

    double seconds = difftime(end, start);

    printf("Time: %.0f seconds\n", seconds);

    return 0;
}