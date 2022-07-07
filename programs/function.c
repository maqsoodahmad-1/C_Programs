/*write a c program to find out the largest value from three input values with the help of a function/  module */
#include<stdio.h>
int function (int , int );
void main()
{
    int a, b, c, m;
    printf("input three values ");
    scanf("%d%d%d",&a,&b,&c);
    m=function(a,b);
    m=function(m,c);
    printf("the largest value is %d",m);
}
int function (int j,int k)
{
 
    if(j>k)
    {
      return(j);
    }
    else
    {
        return(k);
    }
}