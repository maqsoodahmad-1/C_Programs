/*Write a program using conditional operators to determine whether
a year entered through the keyboard is a leap year or not.*/
#include<stdio.h>
void main()
{
    int year ;
    printf("Enter any year :");
    scanf("%d",&year);
    (year%100==0)?((year%400==0)?printf("The year is a leaf year \n"):
    printf("The year is not a leaf year \n")):
    (year%4==0)?printf("The year enterd is a leaf year \n"):
    printf("The year entered is not a leaf year \n");
}