#include <stdio.h>

void main(void){
    int p;
    int card;
    int op;

    printf("what is your original position\n");
    scanf("%d", &op);
    printf("what is your card\n");
    scanf("%d", &card);
    p = card + op - 16;
    printf("Your pos is %d", p);
    }
    