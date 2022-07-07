#include<stdio.h>
void main()
{ int n,i,j,p=1;
printf("input number of terms ");
scanf("%d",&n);
for(j=1;j<=n;j++)
   {
       for(i=1;i<=j;i++)
     {
         printf("%d ",p);
        p++;
     }

       printf("\n");
    }
}