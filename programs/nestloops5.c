/*write a c program to print the following pyramid
A
A B
A B C
A B C D 
A B C D E 
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
        printf("%C ",j+64);
        }
        printf("\n");
    }
}