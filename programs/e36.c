/*Write a program to print all the ASCII values and their equivalent
  characters using a while loop. The ASCII values vary from 0 to 255.
*/
#include<stdio.h>
void main()
{
    int i=0;
    while (i<=255)
    {
        printf("The ASCII %d is equivalent to the character value %c\n",i,i );
        i++;
    }
    
}