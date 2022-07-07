/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.*/
#include<stdio.h>
void main()
{
    int area,perimeter,length,breadth;
    printf("enter the value of length amd breadth of a rectangle \n");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area==perimeter)
    {
        printf("the area of a rectangle is equal to the perimeter of a recttangle \n");
    }
    else
    {
        printf("the area of rectangle is  not equal to the perimeter of rectangle \n");
    }
}