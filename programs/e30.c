/*Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators.*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    (a>=b)?(a>=c)?printf("a is greater in three\n"):printf("c is greater of three \n"):
    (b>=c)?printf("b is greater of three \n"):printf("c is greater of three \n");
}