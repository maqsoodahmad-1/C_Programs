// conversion of distance from  kilometers to other units 
// writer maqsood.Date:06/062021
#include<stdio.h>
void main ()
{  float dis_in_km,dis_in_m,dis_in_feet,dis_in_inches,dis_in_cm;
   printf("enter the distance between two cities in kilometers = ");
   scanf("%f",&dis_in_km);
   dis_in_m=dis_in_km*1000;
   dis_in_cm=dis_in_km*100000;
   dis_in_feet=dis_in_km*3280.84;
   dis_in_inches=dis_in_km*30370.1;
   printf("distance in km=%f\nditance in meter=%f\ndistance in cm=%f\ndistance in feet=%f\ndistance in inches=%f",dis_in_km,dis_in_m,dis_in_cm,dis_in_feet,dis_in_inches);





}