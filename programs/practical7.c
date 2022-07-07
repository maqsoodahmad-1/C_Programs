#include<stdio.h>
void main()
{
    int x[5],i,t,j;
    printf("input five values \n");
    for(i=0;i<=4;i++)
   {
        printf("value   ");
        scanf("%d",&x[i]);
   }
    for(j=1;j<=4;j++)
  {
            for(i=0;i<=3;i++)
           {
                if (x[i]>x[i+1])
                {
                 t=x[i];
                 x[i]=x[i+1];
                x[i+1]=t;
                }

           }
  }
    for(i=0;i<=4;i++)
    {
        printf("%d\n",x[i]);
    }
}