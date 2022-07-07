#include<stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],sum[100][100],r,c;
    printf("enter number of rows(betweeen 0 to 100):");
    scanf("%d",&r);
    printf("enter number of coluomns(between 0 to 100):");
    scanf("%d",&c);
    printf("enter value into first matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
        printf("enter element a%d%d:",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    
    printf("\ta matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d ",a[i][j]);
            if (j==c)
            {
                printf("\n");
            }
        }
    }
    printf("enter elements of 2nd matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           printf("element b%d%d:",i,j);
           scanf("%d",&b[i][j]);
        }
    }
    printf("\t b matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           printf("%d ",b[i][j]);
            if(j==c)
            {
                printf("\n");
            }
        }
    }
    printf("sum of matrix\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    /*printing sum*/
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d  ",sum[i][j]);
            if(j==c)
            {
                printf("\n");
            }
        }
    }
}