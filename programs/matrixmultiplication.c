#include<stdio.h>
void main()
{
  int x[10][10],y[10][10],z[10][10],i,j,r,c,k;
  printf("eneter number of rows and columns ");
  scanf("%d%d",&r,&c);
  printf("enter value into first matrix\n");
  for(i=1;i<=r;i++)
  {
      for(j=1;j<=c;j++)
      {
          printf("x%d%d:",i,j);
          scanf("%d",&x[i][j]);
      }
  }
  /*printing entered matrix*/
  printf("\nx matrix\n");
  for(i=1;i<=r;i++)
  {
      for(j=1;j<=c;j++)
      {
          printf("%d   ",x[i][j]);
          if(j==c)
          {
              printf("\n");
          }
      }

  }
  printf("enter data into y matrix\n");
 for(i=1;i<=r;i++)
  {
      for(j=1;j<=c;j++)
      {
          printf("y%d%d:",i,j);
          scanf("%d",&y[i][j]);
      }
  }
  /*printing entered matrix*/
  printf("\ny matrix\n");
  for(i=1;i<=r;i++)
  {
      for(j=1;j<=c;j++)
      {
          printf("%d   ",y[i][j]);
          if(j==c)
          {
              printf("\n");
          }
      }

  }
/*for multiplying matix*/
for(i=1;i<=r;i++)
{
    for(j=1;j<=c;j++)
    {
        z[i][j]=0;
        for(k=1;k<=3;k++)
        {
            z[i][j]=z[i][j]+x[i][k]*y[k][j];
        }
    }
}
//printing result 
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
    {
          printf("%d  ",z[i][j]);
    }
    printf("\n");
}

















}