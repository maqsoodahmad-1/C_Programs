#include<stdio.h>
int fibnocci(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    return fibnocci(i-1)+fibnocci(i-2);
}
int main()
{
    int i,n;
    printf("enter number of terms");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d  ",fibnocci(i));
    }
    return 0;
}