#include <stdio.h>
int a = 1;

void print1(void);

void main(void){
    void (*Pprint1)(void);
    
    Pprint1 = &print1;
    
    switch(a){
        case 1: 
        Pprint1();
        case 2:
        Pprint1();
        
        default:
        print1();
        
    }
}
void print1(void){
    printf("Number %d", a);
    }