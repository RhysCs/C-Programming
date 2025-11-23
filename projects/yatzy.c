#include <stdio.h>
struct Player{

    int score;
    char name;
};

void main(void){
    
    int Pcount;
    int total_score = 0;
    
    struct Player players[Pcount];
    struct Player *players[Pcount];
    Pplayers = players;

    printf("How many players are there\n");
    scanf("%d", &Pcount);
    
    
    for(int i = 0;i < Pcount; i++){
        printf("what is the name of the player %d \n", i + 1);
        scanf("%s30", players[i].name);
        players[i].score = 0;
    }
}
int function1(void){
    for(int b = 0; b < Pcount; b++){
        printf("what is the score for player %d\n", b + 1);
        scanf("%d", &total_score);
        &players[b].score += total_score;
        if(total_score >= 10000){
            printf("Congradulations you have won %s", players[b].name);
        }
    }
}