/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r,phi).
Hint: r = sqrt ( x^2 + y^2 ) and phi=tan^-1( y / x )*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int x,y;
    float phi,r;
    printf("enter the value of two coordinates \n");
    scanf("%d%d",&x,&y);
    r=sqrt((pow(x,2))+(pow(y,2)));
    phi=atan(y/x);
    printf("r = %f\nphi = %f\n ",r,phi);
}