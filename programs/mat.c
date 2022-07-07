#include<stdio.h>
void main()
{int students,amt;
printf("Enter no of students\n");
scanf("%d",&students);
{if(students<=5)
amt=50 ;
else if (students<=10)
amt=40 ;
else if (students<=20)
amt=30; 
else if (students<=50)
amt=20 ;
else if(students>50)
amt=10 ;}
printf("amt=%drupees",amt);

}