#include <stdio.h>

int main(){

    float hours, vm, liters;
    scanf("%f %f", &hours, &vm);
    liters = (hours * vm) / 12;
    printf("%.3f\n", liters);
    return 0;
}