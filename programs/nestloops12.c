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
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
}