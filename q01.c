#include <stdio.h>

#define APPLE_RATE_PER_KG 120.0
#define BANANA_RATE_PER_DOZEN 60.0
#define DISCOUNT_THRESHOLD 500.0
#define DISCOUNT_RATE 0.10

double compute_total_cost(double apple_kg, double banana_dozen) {
    double total = apple_kg * APPLE_RATE_PER_KG + banana_dozen * BANANA_RATE_PER_DOZEN;
    if (total > DISCOUNT_THRESHOLD) {
        total *= (1.0 - DISCOUNT_RATE);  // Apply discount if total exceeds threshold
    }
    return total;
}

int main(void) {
    double apple_kg, banana_dozen;
    printf("Enter the quantity of apples (kg): ");
    scanf("%lf", &apple_kg);
    printf("Enter the quantity of bananas (dozen): ");
    scanf("%lf", &banana_dozen);

    if (apple_kg < 0 || banana_dozen < 0) {
        printf("Invalid input. Quantities cannot be negative.\n");
        return 0;  // Exit the program if input is invalid
    }

    double total_cost = compute_total_cost(apple_kg, banana_dozen);
    printf("Total payable amount: %.2f\n", total_cost);

    return 0;
}
