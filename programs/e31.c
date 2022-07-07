/*Write a program to receive value of an angle in degrees and check
  whether sum of squares of sine and cosine of this angle is equal to
1.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int angle,x;
    printf("Enter the angle \n");
    scanf("%d",&angle);
    x=sin(angle)*sin(angle)+cos(angle)*cos(angle);
    (x==1)?printf("the result is equal to %d\n",x):printf("the result is not equal to 1 but is %d",x);
}
