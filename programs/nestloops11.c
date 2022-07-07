/*write a c program to print the following pyramid
A
B   A
C   B   A
D   C   B   A
E   D   C   B   A
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
        printf("%C   ",j+64);
        }
        printf("\n");
    }
}