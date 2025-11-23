#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int round2(int a)
{
    
    int number1= (rand() % a) + 1;
    return number1; 
}

int main()
{
    srand(time(0));
    int x = round2(6);
    printf("%d", x);
    return 0;
}