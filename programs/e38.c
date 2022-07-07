/*Write a program for a matchstick game being played between the
  computer and a user. Your program should ensure that the
  computer always wins. Rules for the game are as follows:

  - There are 21 matchsticks.
  - The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
  - After the person picks, the computer does its picking.
  - Whoever is forced to pick up the last matchstick loses the game.
*/
#include<stdio.h>
void main()
{
  int computers_pick,persons_pick;
  printf("----------------game started! let's play--------------\n");
  for(int i=0,matchsticks=21;i<4;i++)
  {
    printf("Pick 1,2,3 or 4 matchsticks \n ");
    scanf("%d",&persons_pick);
    printf("you have picked %d\n",persons_pick);
    computers_pick = 5 - persons_pick  ;
    printf("computer picked %d\n",computers_pick);
    matchsticks -= 5;
    if(matchsticks==1)
    {
      printf("\nyou have lost the game \n");
    }
  }

}