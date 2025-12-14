#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1; 

    printf("Enter the base (e.g., 2nd last digit of your student ID): ");
    scanf("%d", &base);

    printf("Enter the exponent (e.g., last digit of your student ID): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Exponent should be a non-negative integer.\n");
        return 0;
    }

    // Calculation for power using a loop
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power %d = %d\n", base, exponent, result);

    return 0;
}
