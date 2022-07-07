/*multiptiction of matrix having N number of rows and columns*/
#include<stdio.h>
void main()
{

  int m,n,p,q,c,r,first[10],second[10][10],multiply[10][10];
  printf("enter number of rows and columns for first matrix ");
  scanf("%d%d",&m,&n);
  printf("input data into first matrix\n");
    for(r=0;r<m;r++)
    {
         for(c=0;c<n;c++)
         {
            printf("first%d%d:",r,c);
            scanf("%d",&first[r][c]);
         }
    
    }
    //displying matrix
     for(r=0;r<m;r++)
    {
         for(c=0;c<n;c++)
         {
            printf("%d",first[r][c]);
         }
    
    }
  printf("enter number of rows and columns for second matricx\n");
  scanf("%d%d",&p,&q);
  if(p!=n)
  {
      printf("matrix multiplication is not possible");
  }
  else
  {
      printf("enter data into second matrix\n");
      for(r=0;r<p;r++)
      {
          for(c=q;c<q;c++)
          {
              printf("second%d%d:",p,q);
              scanf("%d",&second[r][c]);
          }
      }
      for(r=0;r<p;r++)
      {
          for(c=q;c<q;c++)
          {
              printf("%d",second[r][c]);
             
          }
      }
      //for()

  }

}