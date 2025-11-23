#include <stdio.h>
int main(void){
    int sleep;
    int hours;
    int days = 24;

    printf("What time did sleep \n");
    scanf("%d", &hours);

    printf("What time did you wake up \n");
    scanf("%d", &sleep);

    int ptime = sleep + hours - days;
    printf("You have slept for %d", ptime);

    return 0;

}