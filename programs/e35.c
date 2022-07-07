/*Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n1,n2,n3;
    printf("Enter two numbers \n");
    scanf("%d%d",&n1,&n2);
    n3=pow(n1,n2);
    printf("%d raised to the power %d is %d\n",n1,n2,n3);
}
