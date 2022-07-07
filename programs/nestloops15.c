/*write a c program to print the following pyramid
1                                           1   
1   2                                   2   1
1   2   3                           3   2   1
1   2   3   4                   4   3   2   1
1   2   3   4   5           5   4   3   2   1
1   2   3   4   5   6   6   5   4   3   2   1
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
        for(j=1;j<=i;j++)
        {
        printf("%d  ",j);
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