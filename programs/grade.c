/*the program is written to print grade by claculate percentage of marks obtained*/
#include <stdio.h>
int main(int argc, char const *argv[])
{ float marksobtained ,percentage=0;
printf("enter marks\n");
scanf("%f", &marksobtained);
percentage =marksobtained/500*100;
if ( percentage >=90&&percentage<=100)
        printf("A+");
else if (percentage >=80&&percentage<=90)
        printf("A");

else if (percentage >=70&&percentage<=80)
        printf("B+");
else if (percentage >=60&&percentage<=70)
        printf("B");
else if (percentage >=50&&percentage<=60)
        printf("C+");
else if (percentage >=40&&percentage<=50)
        printf("C");
else if (percentage <40&&percentage<=40)
        printf("F");
else if (percentage>100)
printf("invalid input");
    return 0;
};
