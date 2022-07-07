#include<stdio.h>
#include<math.h>
int main ()
/*program to find roots of a quadratic equation*/
{
int a,b,c;
float dis,root_1,root_2,d,i;
float x,y,z;
printf("enter integer cofficients a then b and then c");
scanf("%d%d%d",&a,&b,&c);
dis=b*b-4*a*c;
 if (dis>0)
 {
    printf("roots are real ");
    d=sqrt(dis);
    root_1=(-b+d)/(2*a);
    root_2=(-b-d)/(2*a);
    printf("the roots are %f%f\n",root_1,root_2);
 }
 else
 {
     if(dis==0)
     {
       printf("roots are equal\n");
       root_1=-b/(2*a);
       printf("the root is %f\n",root_1);
     }
     else
     {
       x=-b/(2*a);
       y=+i*d/(2*a);
       z=-i*d/(2*a);
         printf("complex roots  ");
         printf("real part =%f\n",x);
         printf("imaginary part %f%f",y,z);
     }
 }
}