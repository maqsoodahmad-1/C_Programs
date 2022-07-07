//write a c program to illustrate the multiplication of two matrix 
#include<stdio.h>
void main()
{
int x[3][3],y[3][3],z[3][3],i,j,k;
printf("input value into x matrix \n");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        printf("x[%d][%d]=",i,j);
        scanf("%d",&x[i][j]);
    }

}
printf("input data into y matrix ");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        printf("y[%d][%d]",i,j);
        scanf("%d",&y[i][j]);
    }
}

/*for multiplying */
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        z[i][j]=0;

        for(k=0;k<=2;k++)
        {
            z[i][j]=z[i][j]+x[i][k]*y[k][i];
        }
    }  
  }
  /*output */
  printf("\n X matrix\n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {
          printf("%d\t",x[i][j]);
      }
      printf("\n");
  }
  printf("\n Y matrix \n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {
          printf("%d\t",y[i][j]);
      }
      printf("\n");
  }
  printf("\n Z matrix \n");
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {
          printf("%d\t",z[i][j]);
      }
      printf("\n");
  }
}