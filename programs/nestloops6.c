/*write a c program to print the following pyramid
A
B  B 
C  C  C 
D  D  D  D 
E  E  E  E  E 
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
        printf("%c   ",i+64);
        }
        printf("\n");
    }
}