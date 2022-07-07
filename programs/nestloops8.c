/*write a c program to print the following pyramid
1 
2   1   
3   2   1
4   3   2   1   
5   4   3   2   1
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
        printf("%d   ",j);
        }
        printf("\n");
    }
}