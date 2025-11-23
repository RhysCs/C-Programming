#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a = 6;

int round2(int a)
{
    int number1= (rand() % a) + 1;
    return number1; 
}

int main()
{
    srand(time(NULL));
    

    int number1 = round2(a);  // call the function
    printf("You got a %d!\n", number1);

    return 0;
}