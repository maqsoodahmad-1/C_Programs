/*If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios.*/
#include<stdio.h>
#include<math.h>
#define phi 3.1415
void main()
{
    float angle;
    printf("enter the value of an angle \n ");
    scanf("%f",&angle);

    printf("the value of trigonometric ratios is as follows \n");

    printf("sin%0.2f=%0.2f\n",angle,sin(angle*(180/phi)));

    printf("cos%0.2f=%0.2f\n",angle,cos(angle*(180/phi)));

    printf("tan%0.2f=%0.2f\n",angle,tan(angle*(180/phi)));

    printf("cot%0.2f=%0.2f\n",angle,(1/(tan(angle*(180/phi)))));

    printf("sec%0.2f=%0.2f\n",angle,(1/(cos(angle*(180/phi)))));

    printf("cosec%0.2f=%0.2f\n",angle,(1/(sin(angle*(180/phi)))));
}
