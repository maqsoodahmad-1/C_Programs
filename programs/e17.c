/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float x1,x2,x3,y1,y2,y3,AB,BC,AC;
    printf("enter the coordinates of point A(x1,y1) points\n");
    scanf("%f%f",&x1,&y1);
    printf("enter the coordinates of point B(x2,y2) points\n");
    scanf("%f%f",&x2,&y2);
    printf("enter the coordinates of point c(x3,y3) points\n");
    scanf("%f%f",&x3,&y3);
    AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    BC=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    AC=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    if(AC==AB+BC||AB==AC+BC||BC==AB+AC)
    {
        printf("the three points fall on a striaght line \n");
    }
    else
    {
        printf("the three points does not fall on a striaght line \n");
    }
    


}