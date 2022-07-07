/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number*/
#include<stdio.h>
void main()
{
    int number;
    printf("enter the number \n");
    scanf("%d",&number);
    if(number %2==0)
    {
        printf("the number is an even number \n");
    }
    else
    {
        printf("the number is an odd number ");

    }
}