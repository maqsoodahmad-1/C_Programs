/*In boxing the weight class of a boxer is decided as per the following
table. Write a program that receives weight as input and prints out
the boxer’s weight class.
Boxer Class                Weight in Pounds
Flyweight                   <115
Bantamweight                115 - 121
Featherweight               122 - 153
Middleweight                154 - 189 
Heavyweight                 >= 190  
*/
#include<stdio.h>
void main()
{
    int weight;
    printf("enter the weight \n");
    scanf("%d",&weight);
    if(weight>0&&weight<115)
    {
        printf("weight class is 'FLYWEIGHT'\n");
    }
    else if(weight>=115&&weight<=121)
    {
        printf("weight class is 'BANTAMWEIGHT'\n");
    }
    else if(weight>=122&&weight<=153)
    {
        printf("weight class is 'FEATHERWEIGTH'\n");
    }
    else if(weight>=154&&weight<=189)
    {
        printf("weight class is 'MIDDLEWEIGHT'\n");
    }
    else
    {
        printf("weight class is 'HEAVYWEIGHT'\n");
    }
}