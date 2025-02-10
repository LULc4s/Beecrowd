#include <stdio.h>

int main(){
    int number, hswk;
    float vph, slr;
    scanf("%d", &number);
    scanf("%d", &hswk);
    scanf("%f", &vph);
    slr = hswk * vph;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", slr);
    return 0;
}