#include<stdio.h>
void main()
{
int n,x,y;
printf("input number \n");
scanf("%d",&n);
for (x=1;x<=10;x++)
    {
        y=n*x;
        printf(" the multiples of number are %d\n",y);
    }
}