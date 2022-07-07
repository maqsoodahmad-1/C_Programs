/*the progam is written to print grade on the basis of marks obtained*/
#include <stdio.h>
void main()
{int marksobtained;
printf("Enter Marks\n");
scanf("%d",&marksobtained);
{if (marksobtained >=90&&marksobtained<=100)
    printf("A+");
else if (marksobtained >=80&&marksobtained<=90)
    printf("A");
else if (marksobtained >=70&&marksobtained<=80)
    printf("B+");
else if (marksobtained >=60&&marksobtained<=70)
    printf("B");
else if (marksobtained >=50&&marksobtained<=60)
    printf("C+");
else if (marksobtained >=40&&marksobtained<=50)
    printf("C");
else if (marksobtained <40)
    printf("F");

else if (marksobtained >100)
    printf("invlaid input");}
    
} 