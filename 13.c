#include <stdio.h>

int main(void)
{
    int n = 10;

    // Pointer to the address of n
    int *p = &n;

    printf("Value of n: %i\n", n);
    printf("Address of n: %p\n", (void *)&n);
    printf("Pointer p stores: %p\n", (void *)p);
    printf("Value at address p: %i\n", *p);

    return 0;
}