// date 06/01/2021
//write a c program to find out the secod largest value from N input numbers
#include<stdio.h>
void main()
{int sm, m ,x=1,N,v;
printf("enter number of terms \n");
scanf("%d",&N);
printf("enter first number\n");
scanf("%d",&v);
    m=v;
    sm=v;
while(x<N){
        printf("input value \n");
        scanf("%d",&v);
            if(v>m){
              sm=m;
              m=v;
            }
            else if (v>sm){
                sm=v;}
        x++;}
            
        printf("the second largest value is %d\n",sm);
}