// Drone movement

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x = 0, y = 0;
    float targetX = 100, targetY = 50;
    float speed = 2.0;

    while (1)
    {
        float dx = targetX - x;
        float dy = targetY - y;

        float distance = sqrt(dx * dx + dy * dy);

        if (distance < 1.0)
        {
            printf("Destination reached\n");
            break;
        }

        float step = fminf(speed, distance);

        x += (dx / distance) * step;
        y += (dy / distance) * step;

        printf("Drone position: %.2f, %.2f\n", x, y);
    }

    return 0;
}