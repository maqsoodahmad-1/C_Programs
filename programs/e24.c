/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle*/
#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter the three sides of a triangle \n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2&&s2==s3)
    {
        printf("the triangle is an equilateral trianlge \n");
    }
    else if((s1==s2&&s2!=s3)||(s2==s3&&s3!=s1)||(s3==s1&&s1!=s2))
    {
        printf("the triangle is an isosceles triangle \n");
    }
    else 
    {
        printf("the triangle is a scalene or right angled triangle \n");
    }
}