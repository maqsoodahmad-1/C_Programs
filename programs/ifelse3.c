//the program is written to print the largest value form four values entered by user
#include <stdio.h>
void main()
{int a,b,c,d,m;
printf("enter any four values\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if (a>b){
    m=a;
    }
else{
    m=b;
}
if(c>m){
    m=c;
}
if(d>m){
    m=d;
}
printf("the largest vlaue is %d",m);
}
