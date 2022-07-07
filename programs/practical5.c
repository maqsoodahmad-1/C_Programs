//devolop a c program to check wheather the given number is prime or not 
#include<stdio.h>
void main()
{int flag=0,v,rem,x;
printf("input any number");
scanf("%d",&v);
for(x=2;x<v;x++){
rem=v%x;
    if(rem=0){
        flag=1;
    }
break;}
if (flag ==0){
    printf("the given number is a prime  number");
    }
    else{
        printf("the given number is not a prime number");}
    }