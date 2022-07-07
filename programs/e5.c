/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int l1,l2,l3;
    float s,area,z;
    printf("enter the lenght of three sides of a triangle  \n");
    scanf("%d%d%d",&l1,&l2,&l3);
    s=(l1+l2+l3)/2;
    z=((s-l1)*(s-l2)*(s-l3));
    area=sqrt(s*z);
    printf("the area of triangle is %f \n",area);

}
