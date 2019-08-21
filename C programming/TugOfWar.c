
//You decide to bet on the final match of the Tug of War National Championship.
//Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2,
 //and so on). There is the same number of players on each side.
//You record the player weights as they are presented and calculate a total weight for each time to inform your bet.
//You write a C program to assist with this.

//Your program should first read an integer indicating the number of members per team.
//Then, the program should read the player weights (integers representing kilograms) alternating by team.

//After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 or 2 depending
//on which team has a greater total weight).
//You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:"
//followed by the weight of team 2 (see example below).

//You are guaranteed that the two teams will not have the same total weight.


#include <stdio.h>
int main(void)
{
  int iNbOfPlayers, iPlayerWeight=0;
  int iTeam_1_Weight =0, iTeam_2_Weight =0;
  //read Nb. of iNbOfPlayers (team with same nb. of players)

 // printf("%s\n", "Nb Of Players" );
  scanf("%d", &iNbOfPlayers);

 // printf("%d\n", iNbOfPlayers );
  int i=0;
  for(i=0; i<(2*iNbOfPlayers); i++){
    //ce je stevilo manjse od 2*#, vnesi st. Kg
    scanf("%d", &iPlayerWeight);

    //team 2
    if(i%2 == 1){
      //printf("%s %d\n", "team2", i );
      iTeam_2_Weight = iTeam_2_Weight + iPlayerWeight;
    }else{
      //Team 1
      //printf("%s %d\n", "team1", i );
      iTeam_1_Weight = iTeam_1_Weight + iPlayerWeight;
    }

  }
  if(iTeam_1_Weight > iTeam_2_Weight) {
    printf("Team 1 has an advantage\n");
  }
  else{
    printf("Team 2 has an advantage\n");
  }

  printf("Total weight for team 1: %d\n", iTeam_1_Weight );
  printf("Total weight for team 2: %d\n", iTeam_2_Weight );

    return 0;
}
