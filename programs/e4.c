/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,reverse =0,r,choice;
    while(1)
    {
        printf("press 1 to enter a five digit number \npree 2 to exit from a program \n");
        printf("enter your option\n");
        scanf("%d",&choice);
      switch (choice)
      {
      case 1:
      {  
        printf("enter a five digit nuber\n");
        scanf("%d",&x);
        if(x>=10000&&x<=99999)
        {
            for(int i=0;i<5;i++)
            {
                r=x%10;
                reverse=reverse*10+r;
                x=x/10;
            } 
             printf("the reverse is %d\n",reverse);
        }
        else
        {
            printf("you have not entered a five digit number  try by entering a five digit number \n");
            continue;  
        }
        break;
      }
        case 2:
        {
            exit(0);
        }
      }
    }
}