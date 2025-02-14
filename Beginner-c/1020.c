#include <stdio.h>

int main(){
    int n, years = 0, months = 0, days = 0;
    scanf("%d", &n);
    while(n > 0 ){
        
        if(n >= 365){
            n -= 365;
            years += 1;
        }
        else if(n >= 30){
            n -= 30;
            months += 1;
        }
        else if(n >= 1){
            n -= 1;
            days += 1;
        }
    };
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
}