/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963*cos^-1( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/
#include<stdio.h>
#include<math.h>
void main()
{
float D,L1,L2,G1,G2;
printf("Enter the value of Latitude of two places \n");
scanf("%f%f",&L1,&L2);
printf("Enter the values of longitude of two placs  \n");
scanf("%f%f",&G1,&G2);
D=3963*acos((sin(L1)*sin(L2))+(cos(L1)*cos(L2))*cos(G2-G1));
printf("the distance between to cities is %f\n",D);
}
