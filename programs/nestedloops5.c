#include<stdio.h>
void main()
{
    int i,j,n,s;
    printf("enter the number of terms you want to print ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)  
    {   for(j=1;j<=i;j++)
        {
                printf("%d ",j);
        }
        for(s=1;s<=n-i;s++)
        {
                 printf("   ");
        }
        for(j=i;j>=1;j--)
        {
             printf("%d ",j);
        }
            printf("\n");
    }
}