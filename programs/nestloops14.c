/*write a c program to print the following pyramid
    
                  *
                * *
              * * *
            * * * *
          * * * * *
- - - - - - - - - - - - - - - - - - - n
                                            */
#include<stdio.h>
void main ()
{
    int j,i,n,s;
    printf("enter the number of terms you want to print ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
        printf("%d ",j);
        }
        for(s=1;s<=n-i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
        printf("%d ",j);
        }
        printf("\n");
    }
}