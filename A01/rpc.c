#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum choices{
  ROCK=1,
  PAPER=2,
  SCISSORS=3
};
void PlayerRound(int *player_choice);
void AiRound(enum choices *ai_choice);
void Rpc_Winner_Checker(enum choices player_choice, enum choices ai_choice);
int main() {
  int rounds_chosen=0;
  srand(time(0));
  enum choices ai_choice;
  printf("Welcome to Rock, Paper, Scissors! /n");
  printf("How many rounds do you want to play?");
  scanf("%d", &rounds_chosen);
  while(rounds_chosen>0){
    int player_choice;
    PlayerRound(&player_choice);
    AiRound(&ai_choice);
    Rpc_Winner_Checker(player_choice, ai_choice);
    rounds_chosen--;



  }


  return 0;
}
void PlayerRound(int *player_choice){

   printf("Chose 1/rock, 2/paper, 3/scissors: ");
   scanf("%d", player_choice);
}
void AiRound(enum choices *ai_choice){
  *ai_choice=rand()%3+1;
}
void Rpc_Winner_Checker(enum choices player_choice, enum choices ai_choice){
  if(player_choice == ai_choice){
    printf("It's a tie!\n");
  } else if((player_choice == ROCK && ai_choice == SCISSORS) ||
            (player_choice == PAPER && ai_choice == ROCK) ||
            (player_choice == SCISSORS && ai_choice == PAPER)){
    printf("You win this round!\n");
  } else {
    printf("AI wins this round!\n");
  }
}

