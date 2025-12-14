#include <stdio.h>

int main() {
    int ID, digit;
    printf("Enter your ID: ");
    scanf("%d", &ID);

    if (ID < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    while (ID > 0) {
        digit = ID % 10;
        printf("%d",digit) ;         
        ID /= 10;          
    }

    return 0;
}
