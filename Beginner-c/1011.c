#include <stdio.h>

int main(){
    double r;
    scanf("%lf", &r);
    double volume = (4/3.0) * 3.14159 * r * r * r;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}