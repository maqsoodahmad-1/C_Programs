/*write a c program to print the following pyramid
1
0 0
1 1 1
0 0 0 0 
1 1 1 1 1 
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
        for(j=1;j<=i;j++)
        {
        printf("%d ",i%2);
        }
        printf("\n");
    }
}