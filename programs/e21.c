/*Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various
characters
*/
#include<stdio.h>
void main()
{
    char c;
    printf("enter the char \n");
    c=getchar();
    if(c>=65&&c<=90)
    {
        printf("the character entered is a capital letter \n");
    }
    else if(c>=97&&c<=122)
    {
        printf("the character entered is a samll letter \n");
    }
    else if(c>=48&&c<=57)
    {
        printf("the character entered is a digit \n");
    }
    else if((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))
    {
        printf("the character entered is a symbol \n");
    }
    else
    {
      printf("the character is not recognised \n");
    }
}