/*Write a program to find the factorial value of any number entered
through the keyboard.*/
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter the number whose factorial you want to find  :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fact=fact*(n-i);
    }
    printf("The factorial is %d\n",fact);
}