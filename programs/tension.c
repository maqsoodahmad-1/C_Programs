#include<stdio.h>
void main()
{int students,amt,maqsood;
printf("Enter no of students\n");
scanf("%d",&students);
{if(students>50)
    maqsood=10;
else if(students>21&&students<=50)
    maqsood=20;
else if(students>11&&students<=20)
    maqsood=30;
else if(students >6 && students <=10)
    maqsood=40;
else if(students<=5&&students>1)
    maqsood=50;}
    
amt=maqsood*students;
printf("%d",amt);


}