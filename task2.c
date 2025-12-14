#include <stdio.h>
int main(){
    int popA= 10000;
    int popB= 8000;
    int growthA= 250;
    int growthB= 400;
    int year=0;
    while (popB <= popA){
        popA += growthA;
        popB += growthB;
        year++;
    }
    printf("TownB population will surpass TownA population in %d years\n", year);
    printf("final population of Town A: %d\n", popA);
    printf("final population of Town B: %d\n", popB);

    return 0;


}