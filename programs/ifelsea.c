/*the program is written to find out the largest value from  three numbers*/
#include<stdio.h>
void main ()
{ int a,b,c;
printf("enter your number\n");
scanf("%d%d%d",&a,&b,&c);
{if((a>b)&&(a>c))
    printf("%d",a);
else if ((b>a) &&(b>c))
    printf("%d",b);
else 
printf("%d",c);}
}