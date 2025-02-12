#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    int maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = (((a + b + abs(a  - b))/2) + c + abs( ((a + b + abs(a  - b))/2) - c)) / 2;
    
    printf("%d eh o maior\n", maior);
    
    return 0;
}