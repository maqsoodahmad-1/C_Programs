/*write a c program to print the following pyramid
1   
2   2   
3   3   3   
4   4   4   4   
5   5   5   5   5   
- - - - - - - - - - - - - - - - - - - n
                                            */
#include<stdio.h>
void main ()
{
    int j,i,n;
    printf("enter the number of terms you want to print ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
        printf("%d   ",i);
        }
        printf("\n");
    }
}