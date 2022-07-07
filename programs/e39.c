/*Write a program to enter numbers till the user wants. At the end it
  should display the count of positive, negative and zeros entered.*/
  #include<stdio.h>
  #include<ctype.h>
  void main()
  {
      int num,positive_count = 0 ,negative_count = 0,zeros_count = 0;
      char c;
      //char ch ='y';
      //char bh ='n';
      while(1)
      {
          printf("press Y if you want to enter number \npress N if you don't want to enter number\n");
          scanf("%c",&c);
          toupper(c);
           if(c=='Y')
           {
              printf("enter number \n");
              scanf("%d",&num);
              if(num>0)
              {
                  positive_count += 1;
              }
              else if (num<0)
              {
                  negative_count +=1;
              }
              else
              {
                  zeros_count += 1;
              }
            }
            else if(c=='N')
            {
              break;
            }
      }
      printf("you entered \n%d positive numbers\n%d negative numbers\n%d zeros \n",positive_count,negative_count,zeros_count);
  }