/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides.*/
#include<stdio.h>
void main()
{
    int s1,s2,s3,largest=0;
    printf("enter the three sides of a triangle \n");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2&&s1>s3)
    {
        largest=s1;
        if(largest==(s2+s3))
        {
            printf("the triangle is a valid triangle \n");
        }
        else 
        {
            printf("the triangle is not a valid triangle \n");
        }
    }
    else if(s1>s2&&s1<s3)
    {
        largest=s3;
        if(largest==(s1+s2))
        {
            printf("the triangle is a valid triangle \n");
        }
        else 
        {
            printf("the triangle is not a valid triangle \n");
        }
    }
    else if(s1<s2&&s2>s3)
    {
        largest=s2;
        if(largest==(s1+s3))
        {
            printf("the triangle is a valid triangle \n");
        }
        else 
        {
            printf("the triangle is not a valid triangle \n");
        }
    }
    else if(s1<s2&&s2<s3)
    {
        largest=s3;
        if(largest==(s1+s2))
        {
            printf("the triangle is a valid triangle \n");
        }
        else 
        {
            printf("the triangle is not a valid triangle \n");
        }
    }
    else if(s1==s2&&s2>s3)
    {
        largest=s3;
        if(largest==(s1+s2))
        {
            printf("the triangle is a valid triangle \n");
        }
        else 
        {
            printf("the triangle is not a valid triangle \n");
        }
    }
   else 
   {
       printf("the triangle is not a valid triangle \n");
   }
    
}