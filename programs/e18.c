/*Given the coordinates (x, y) of center of a circle and its radius, write
  a program that will determine whether a point lies inside the circle,on the circle or outside the circle. 
 (Hint: Use sqrt( ) and pow( ) functions)*/
 #include<stdio.h>
 #include<math.h>
 void main()
 {
     int x1,y1,x2,y2;
     float radius,distance;
     printf("enter the coordinates of a center \n");
     scanf("%d%d",&x1,&y1);
     printf("enter the coordinates of a point \n");
     scanf("%d%d",&x2,&y2);
     printf("enter the radius of a circle \n");
     scanf("%f",&radius);
    distance=sqrt(pow((x2-x1),2+pow((y2-y1),2)));
    if(distance>radius)
    {
        printf("the point lies outside the circle \n");
    }
    else if(distance<radius)
    {
        printf("the point lies inside the circle \n");
    }
    else
    {
        printf("the point lies on the circle \n");
    }
 }