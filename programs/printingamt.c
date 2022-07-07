
/*the program is written to print the amount on the basis of given information
write the program to print the total amount from the bewlow given data
students 1-6  amount =50 per student  
students 6-10 amount =40 per student 
students 10-20  amount =30 per student 
students 21-50  amount =20 per student 
students above 50 amount =10 per student */
#include<stdio.h>
void main()
{int students,amt;
printf("enter no of students\n");
scanf("%d",&students);
{if (students>50)
    amt=10*students;
else if(students>=21&&students<=50)
    amt=20*students;
else if(students>=11&&students<=20)
    amt=30*students;
else if (students>=6&&students<=10)
    amt=40*students;
else if (students>=1&&students<=5)
    amt=50*students;
    printf("%d",amt);}
}




