/*Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||.*/
#include<stdio.h>
void main()
{
    int year;
    printf("enter the year for which to check if it is a leaf year or not \n");
    scanf("%d",&year);
    if(year%100==0&&year%400==0)
    {
        printf("the year is a leaf year \n");
    }
    else if(year%4==0)
    {
        printf("the year is a leaf year \n");
    }
    else
    {
        printf("the year is not a leaf year \n");
    }
}