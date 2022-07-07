// calculation area and perimeter of a rectangle and area and circumference of a circle  
// programmed by maqsood ahmad tali .Dated: 06/06/2021
#include<stdio.h >
#define pi 3.1415
void main ()
{
    float length ,breadth , radius ,area_of_rectangle ,area_of_circle ,perimeter_of_rectangle ,circumference_of_circle ;
    printf("enter length and breadth of rectangle and radius of circle ");
    scanf("%f\n%f\n%f",&length,&breadth,&radius);
    area_of_rectangle=length*breadth;
    perimeter_of_rectangle=2*(length+breadth);
    area_of_circle=pi*radius*radius;
    circumference_of_circle=2*pi*radius;
    printf("area_of_rectangle=%30.4f\nperimeter_of_rectangle=%30.4f\narea_of_circle=%30.4f\ncircumference_of_circle=%30.4f\n",area_of_rectangle,perimeter_of_rectangle,area_of_circle,circumference_of_circle);
}