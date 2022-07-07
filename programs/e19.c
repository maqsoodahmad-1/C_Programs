/*Given a point (x, y), write a program to find out if it lies on the X-
axis, Y-axis or on the origin.*/
#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the coordinates of a point \n");
    scanf("%d%d",&x,&y);
    if(x==0&&(y>0||y<0))
    {
        printf("the point lies on y-axis \n");
    }
    else if(y==0&&(x>0||x<0))
    {
        printf("the point lies on x-axis\n");
    }
    else if(x==0&&y==0)
    {
        printf("the point lies on the origin\n");
    }
    else
    {
        printf("the point lies in some quadrant \n");
    }
    
}