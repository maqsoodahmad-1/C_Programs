#include <stdio.h>
void main()
{int x=1,N,p=1 ;
printf("enter the number of terms\n");
scanf("%d",&N);
while(x<=N){
    printf("%d\n",p);
    p=x+p;
    x++;}

}