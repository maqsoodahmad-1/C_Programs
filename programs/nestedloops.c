#include<stdio.h>
void main()
{ int n,i,j;
printf("input number of terms\n");
scanf("%d",&n);
for(j=1;j<=n;j++)
   {
       for(i=1;i<=j;i++)
       {
       printf("%d ",i%2);
    }

       printf("\n");
}}