#include <stdio.h>
void main(void){
    /* Define the multi array, not that it is not required to define the number 
    of rows but it must know how many integers are in the array*/
int a[2][5] ={ 
            {2, 3, 4, 6, 3},
            {1, 2, 6, 2, 6}
            };

// Variables 
int i;
int j;

int row = 5;
int col = 2;

// For loop to loop around the rows
for(i = 0; col > i; i++){
    // loop around the rows and then print
    /* Note that first it loops around the col increments i 
    then loops and around the rows and increments j then it 
    repeats again with the next increment*/
    for(j = 0; row > j; j++){
        printf("%d, ", a[i][j]);

        }
        printf("\n");
    }
    i++;
}


