/*write a c program to print the following pyramid
1
2  3
4   5   6
7   8   9   10
11  12  13  14  15
- - - - - - - - - - - - - - - - - - - n
                                            */
#include<stdio.h>
void main ()
{
    int j,i,n,p=1;
    printf("enter the number of terms you want to print ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d    ",p);
        p++;
        }
        printf("\n");
    }
}