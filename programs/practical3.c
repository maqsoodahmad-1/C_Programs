
//date 06/01/2021
//write a c program to print the following series
//1     1   2   5   8   13.................N
#include<stdio.h>
void main()
{int x=0,p1=0,N ,total=0,p2=1;
printf("enter number of terms");
scanf("%d",&N);
while (x<=N){
    printf(" %d\n",p2);
    total=p1+p2;
    p1=p2;
    p2=total;
    x++;}
}