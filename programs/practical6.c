//date 20/01/2021 
/*wirte a c program to design a following pyramid 
            1                           1
          2 1 2                       1 2 1
        3 2 1 2 3                   1 2 3 2 1
      4 3 2 1 2 2 3               1 2 3 4 3 2 1
    5 4 3 2 1 2 3 4 5           1 2 3 4 5 4 3 2 1*/
    #include<stdio.h>
    void main()
    { int n,i,j,s;
    printf("input number of terms ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf("  ");
        }   
        for(j=1;j<=i;j++)
        {
        printf("%d ",j);
        }
    
        for(j=i;j>1;j--)
        {
        printf("%d ",j-1);
        }
        printf("\n");
    }
}