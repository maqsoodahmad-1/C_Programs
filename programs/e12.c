/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)*/
#include<stdio.h>
void main()
{
    int year;
    printf("enter the year for which you want to check if it is a leaf year or not  \n");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("year is a leaf year\n");
        }
        else
        {
            printf("the year is not a leaf year\n");
        }
    }
    else if(year%4==0)
    {
        printf("the year is a leaf year\n");
    }
    else
    {
        printf("the is not a leaf year\n");
    }
}
