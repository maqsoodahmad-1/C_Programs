#include<stdio.h>
void main()
{
    int a[100][100],transpose[100][100] ,i ,j,r,c;
    printf("enter number of rows and columns :");
    scanf("%d%d",&r,&c);
    printf("enter value into first matrix\n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("enter value a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
 /*printing entered matrix */
 printf("\nentered matrix\n");
      for(i=0;i<r;i++)
      {
           for(j=0;j<c;j++)
           {
     
             printf("%d ",a[i][j]);
             if(j==c-1)
             {
                   printf("\n");
             }
           }      
      }
         
      

 //finding the transpose
    for(i=0;i<r;++i)
 {
     for(j=0;j<c;++j)
     {
         transpose[j][i]=a[i][j];
     }
 } 
 printf("\ntranspose of the matrix\n");
  for(i=0;i<c;++i)
  {
      for(j=0;j<r;++j)
      {
         printf("%d ",transpose[i][j]);
         if(j==r-1)
         {
            printf("\n");
         }
      }
   }

}