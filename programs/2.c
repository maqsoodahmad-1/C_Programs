#include<stdio.h>
int main(int argc, char const *argv[])
{
  int c;
  printf("enter the chacter \n");
  c=getchar();
      printf("%d",EOF);
  while(c!=EOF)
  {
      putchar(c);
      printf("\t");
      c=getchar();
  }
    return 0;
}
