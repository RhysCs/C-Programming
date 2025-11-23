#include <stdio.h>

struct player
{
    int score;
    char name;
};


void main(void){

    struct player player1;
    struct player player2;

    printf("What is the name for player 1 \n");
    scanf("%s", &player1.name);

    printf("What is the name for player 2\n");
    scanf("%s", &player2.name);

    player2.score = 0;
    player1.score = 0;

    int number1;
    int number2;

    while(player2.score <= 10000 || player1.score <= 10000){
        
        printf("what is player 1s score %d\n", player1.score);
        scanf("%d", &number1);    

        printf("what is player 2s score %d \n", player2.score);
        scanf("%d", &number2);

        player1.score += number1;
        player2.score += number2;

        if(player1.score >= 10000){
            printf("player1 has won");
            break;
        }else if (player2.score >=10000)
        {
            printf("Player 2 has won");
            break;
        }
        
    }
    
}