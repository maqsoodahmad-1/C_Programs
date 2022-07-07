/*write a c program to print the following pyramid
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 
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
        printf("%d ",j);
        }
        printf("\n");
    }
}