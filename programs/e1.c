/*written by maqsood ahmad tali on 04-01-2022
  Convert the following expression into its equivalent c code 
  (a) Z =( x +3 ) x ^3/((Y-4)(Y+5))
*/
#include<stdio.h>
#include<math.h>
void main()
{
int x,y,Z;
printf("enter the value of x and y ");
scanf("%d%d",&x,&y);
Z=((x+3)*pow(x,3))/((y*y)+y-20);
printf("the value of Z=%d\n",Z);
}