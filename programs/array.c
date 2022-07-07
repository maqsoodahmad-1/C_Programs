#include<stdio.h>
void main()
{int  x[69],i,total=0;
printf("input  69 values\n");
for(i=0;i<=68;i++)
{
    printf("value ");
    scanf("%d",&x[i]);
    total=total+x[i];
}
    printf("total is %d",total);

}