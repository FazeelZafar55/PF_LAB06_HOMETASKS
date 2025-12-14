#include <stdio.h>
#include <math.h>

int main() {
    float amount;
    float rate= 0.05;
    float principal= 1000.0;
    int time= 10;
    printf("Year\t Total Amount\n");
    printf("---------------------\n");
    for (int year=1; year<=time; year++){
        amount= principal * pow((1 + rate), year);
        printf("%d\t %.2f\n", year, amount);
    }
    return 0;
}