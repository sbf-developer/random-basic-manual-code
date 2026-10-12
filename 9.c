
#include <stdio.h>

int main(void)
{
    // Define a structure
    struct Order
    {
        int order_number;
        int customer_number;
    };

    // Create an order
    struct Order order = {101, 25};

    // Print the values
    printf("Order number: %i\n", order.order_number);
    printf("Customer number: %i\n", order.customer_number);

    return 0;
}
