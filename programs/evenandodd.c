#include<stdio.h>
void main ()
{
int n,x;
printf("input the number\n");
scanf("%d",&n);
x = n%2;
if (x==0)
{
    printf("the given number is even");
}
else
{
    printf("the given number is odd");
}

}