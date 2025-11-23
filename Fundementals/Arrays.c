// This is a simple demo of arrays
#include <stdio.h>

void main(void){
    
int i;

int A1[5] = {4, 6, 2, 6, 1};

// Threw this in for ocd purposes
for(i = 0; i < 5; i++){
    if(i < 4){
    printf("%d, ", A1[i]);
    }
    else{
        printf("%d", i);
    } 
}


}