#include <stdio.h>

int main(){

    int pcode;
    double punits, pprice, valuetpay, total = 0;

    for(int i = 0; i < 2; i++){
        scanf("%d %lf %lf", &pcode, &punits, &pprice);
        valuetpay = (punits * pprice);
        total += valuetpay;
    }
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}