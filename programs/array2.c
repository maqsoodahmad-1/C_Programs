/*addition of two matrix into a single matrix*/
#include<stdio.h>
void main()
{
    int x[4][3],y[4][3],z[4][3],i,n;
    printf("input value into x matrix\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=4;n++)
        {
            printf("x[%d][%d]=",i,n);
            scanf("%d",&x[i][n]);
        }
    }
    printf("input value into y matrix\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=4;n++)
        {
            printf("y[%d][%d]=",i,n);
            scanf("%d",&y[i][n]);
        }
    }
    /*add*/
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=2;n++)
        {
            z[i][n]=x[i][n]+y[i][n];
        }
    }

    /*output*/
    printf("\n x matrix\n\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=4;n++)
        {
            printf("%d\t",x[i][n]);
        }
        printf("\n");
    
    }
    printf("\n y matrix\n\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=4;n++)
        {
            printf("%d\t",y[i][n]);
        }
        printf("\n");
    }
    printf("\n z matrix\n\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=4;n++)
        {
            printf(" %d\t",z[i][n]);
        }
    }   printf("\n");
}