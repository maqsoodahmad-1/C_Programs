/*Write a program to find the absolute value of a number entered
through the keyboard.*/
#include<stdio.h>
void main()
{
    int number ;
    printf("enter the number :");
    scanf("%d",&number);
    if(number>=0)
    {
        printf("the absolute value of a number is %d \n",number);
    }
    else
    {
        printf("the absolute value of a number is %d\n",-number);
    }
}