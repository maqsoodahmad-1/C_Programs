/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour.*/
#include<stdio.h>
void main()
{
    int i=1,hours,overtime,overtime_pay;
    while(i<=10)
    {
        printf("enter the number of hours person %d worked :",i);
        scanf("%d",&hours);
        if(hours>40)
        {
            overtime = hours - 40 ;
            overtime_pay = overtime * 12;
            printf("Overtime pay is %d\n",overtime_pay);
        }
        else 
        {
            printf("No Overtime by person \n");
        }
        i++;
    }
}