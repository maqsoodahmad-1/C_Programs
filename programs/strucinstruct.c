#include<stdio.h>
#include<string.h>
struct DOB
{
    int dd;
    int mm; 
    int yy;
};
struct school
{
    int roll_no ;
    char name[40]
    struct DOB db;
}; 
struct school sc;
void main(){
printf("enter roll number");
scanf("%d",&sc.roll_no );
printf("enter name");
gets(sc.name);
printf("date of birth dd mm yy");
scanf("%d %d %d ",&sc.db.dd,&sc.db.mm,&sc.db.yy,);
printf(" roll no=%d",sc.roll_no);
printf(" name=%s",sc.name);
printf("DOB=%d-%d-%d",&sc.db.dd,&sc.db.mm,&sc.db.yy,);}
/*#include <stdio.h>
#include <string.h>
struct student_college_detail
{
 int college_id;
 char college_name[50];
};
struct student_detail 
{
 int id;
 char name[20];
 float percentage;
 // structure within structure
 struct student_college_detail clg_data;
}stu_data;
int main() 
{
 struct student_detail stu_data = {1, "Raju", 90.5, 71145,
 "Anna University"};
 printf(" Id is: %d \n", stu_data.id);
 printf(" Name is: %s \n", stu_data.name);
 printf(" Percentage is: %f \n\n", stu_data.percentage);
 printf(" College Id is: %d \n", 
 stu_data.clg_data.college_id); printf(" College Name is: %s\n", 
 stu_data.clg_data.college_name);
 return 0;
}*/