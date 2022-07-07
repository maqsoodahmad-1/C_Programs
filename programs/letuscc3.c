//calculation of aggregrate marks and percentage marks obtained by student .
//programmed by maqsood ahmad tali Date:06/06/2021.
#include<stdio.h>
void main ()
{
int math,phy,che,eng,his;
float aggregrate_marks,percentage_marks ;
printf("enter the marks obtained by student in different subjects\n");//marks obtained should not exceed 100
scanf("%d%d%d%d%d",&math,&phy,&che,&eng,&his);
aggregrate_marks =(math+phy+che+his+eng)/5;
percentage_marks =(math+phy+che+his+eng)*100/500;
printf("math=%d\nphy=%d\nche=%d\nhis=%d\neng=%d\naggregrate marks =%f\n percentage marks =%f",math,phy,che,his,eng,aggregrate_marks,percentage_marks );



}