/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number=0,x,choice,r,rev;
     while(1)
    {
        printf("--------------starting program --------------\n");
        printf("press 1 to enter a five digit number \npress 2 to check if a number is a palindrome number(if original and reversed numbers are same)\npress 3 to exit from a program\n");
        printf("enter your option :");
        scanf("%d",&choice);
      switch (choice)
      {
      case 1:
      {  
        printf("enter a five digit number :");
        scanf("%d",&x);
        number =x;
        if(x>=10000&&x<=99999)
        { int reverse=0;
            for(int i=0;i<5;i++)
            {
                r=x%10;
                reverse=reverse*10+r;
                x=x/10;
            } 
             printf("the reverse of a number  is %d\n\n",reverse);
             rev=reverse;
        }
        else
        {
            printf("you have not entered a five digit number  try by entering a five digit number \n\n");
            continue;  
        }
        break;
      }
        case 2:
        {
            if(rev==number)
            {
                printf("the number is a palindrome number\n\n");
            }
            else
            {
                printf("the number is not a palindrome number \n\n");
            }
            break;
        }
         case 3:
        {
            exit(0);
        }
        default :
        {
            printf("wrong press try again !\n");
        }
      }
    }
}