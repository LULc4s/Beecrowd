#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int hours = n / 3600;
    int minutes = (n - (3600 * hours)) / 60;
    int seconds = (n - (3600 * hours)) - (minutes * 60);

    printf("%d:%d:%d\n", hours, minutes, seconds);

}