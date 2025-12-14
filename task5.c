#include <stdio.h>

int main() {
    int ID, sum = 0, digit;
    printf("Enter your ID: ");
    scanf("%d", &ID);

    if (ID < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    while (ID > 0) {
        digit = ID % 10;   // Extract last digit
        sum += digit;        
        ID /= 10;          // Remove last digit
    }
    
    printf("Sum of digits = %d\n", sum);

    return 0;
}
