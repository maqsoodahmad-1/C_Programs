#include<stdio.h>
void main()
{int i,j,s,n;
printf("input no of terns ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{   
    for(s=1;s<=n-i;s++)
    {
        printf("   ");
    }
    for(j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
   /* for(s=1;s<=n-i;s++)
    {
        printf("    ");
    }
    for(j=1;j<=i;j++)
    {
        printf(" *");
    }*/
    printf("\n");
}
}