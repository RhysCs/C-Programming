#include <stdio.h>

int main(void){
   int array[4];
   int a = 10;
   int * Pa = &a;
   int S = sizeof(a);
   a = 2;
   
   
   
   printf("%d", *Pa); 
   printf("%d, %d", &a, array);
}
