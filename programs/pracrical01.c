#include<stdio.h>
void main ()
{
int x,y ;
printf("input value into x=");
scanf("%d",&x);
printf("input value into y=");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("x=%d\n",x);
printf("y=%d",y);




}