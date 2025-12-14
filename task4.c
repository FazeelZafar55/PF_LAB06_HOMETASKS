#include <stdio.h>

int main(){
    int last, secondlast, ID, sum;
    unsigned int factorial=1;
    printf("Enter your student ID: ");
    scanf("%d", &ID);

    last= ID % 10;
    secondlast= (ID/10) % 10;
    sum= last + secondlast;

    if (sum==0) {
        printf("Factorial is:", factorial);
    }
    for (int i=1; i<=sum; i++){
        factorial *= i;
    }
    printf("Factorial of %d is: %d ",sum, factorial);
    return 0;
}