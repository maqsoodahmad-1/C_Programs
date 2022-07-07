#include<stdio.h>
void main ()
{ 
    int i,x[4][3],y[3][4],n;
    printf("input value into x matrix\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=2;n++)
        {
            printf("value for x[%d][%d]=",i,n);
            scanf("%d",&x[i][n]);
        }
    } 
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=2;n++)
        {
            
            y[n][i]=x[i][n];
        }
    } 
            printf("\n x Matrix\n\n");
    for(i=0;i<=3;i++)
    {
        for(n=0;n<=2;n++)
        {
            printf("%d\t",x[i][n]);
        }
        printf("\n");
    }
    printf("\n y Matrix\n\n");
    for(i=0;i<=2;i++)
    {
        for(n=0;n<=3;n++)
        {
            printf("%d\t",y[i][n]);
        }
        printf("\n");
    }

}