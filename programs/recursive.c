//#include<stdio.h>
/*void main()
{
unsigned long int factorial(unsigned);
int i=12;
printf("the factorial of %d=%d",i,factorial(i));
}
unsigned long int factorial(unsigned i)
{
    if (i==1)
    {
        return 1;
    }
    return 1*factorial(i-1);
}*/
#include<stdio.h>
unsigned long long int factorial(unsigned i)
{
    if(i==1)
   {
    return 1;
   }
   return i*factorial(i-1);
}
int main()
{
    int i=12;
    printf("the factorial of %d=%d",i,factorial(i));
    return 0;
}




