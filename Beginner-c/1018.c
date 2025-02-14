#include <stdio.h>

int main(){
    int value, n100 = 0 , n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, ntotal;
    scanf("%d", &value);
    ntotal = value;

    while(ntotal > 0){
        if(ntotal >= 100){
            ntotal -= 100;
            n100 += 1;
        }
        else if(ntotal >= 50){
            ntotal -= 50;
            n50 += 1;
        }
        else if(ntotal >= 20){
            ntotal -= 20;
            n20 += 1;
        }
        else if(ntotal >= 10){
            ntotal -= 10;
            n10 += 1;
        }
        else if(ntotal >= 5){
            ntotal -= 5;
            n5 += 1;
        }
        else if(ntotal >= 2){
            ntotal -= 2;
            n2 += 1;
        }
        else if(ntotal >= 1){
            ntotal -= 1;
            n1 += 1;
        }
    }

    printf("%d\n", value);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}