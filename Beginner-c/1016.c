#include <stdio.h>

int main(){

    int km, time;
    scanf("%d", &km);
    /* Y moves away from X at a rate of 1 km every 2 minutes, 
    then the time (t) it takes to move M minutes away is given by:    
    */
    time = km * 2;
    printf("%d minutos", time);
    return 0;
}