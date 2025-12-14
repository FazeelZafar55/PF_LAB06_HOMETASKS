#include <stdio.h>
int main(){
    int ID,last,secondlast;
    int count=0, num=1;
    printf("Enter your Student ID: ");
    scanf("%d", &ID);

    last= ID %10;
    secondlast= (ID / 10) % 10;

    if (last == 0 || secondlast == 0){
        printf ("Division by zero not possible");
        return 0;
    }
    printf("First 10 numbers divisible by %d and %d are: \n", secondlast, last);

    while (count < 10){
        if (num % last == 0 && num % secondlast == 0){
            printf("%d ",num);
            count++;
        }
        num++;
    }
    return 0;



}