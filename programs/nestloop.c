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
    int j,i,n;
    printf("enter the number of terms you want to print ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
}