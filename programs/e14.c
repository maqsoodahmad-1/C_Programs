/*Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.*/
#include<stdio.h>
void main ()
{
    int sum=0,a,b,c;
    printf("enter the value of the three angles of a triangle in degree  \n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("the triangle is a valid triangle \n ");
    }
    else
    {
        printf("the triangle is not a valid triangle \n");
    }
}