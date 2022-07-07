#include<stdio.h>
void main()
{int n;
printf("input any value between 1to7\n");
scanf("%d",&n);
switch(n)
{case1: 
    printf("sunday");
break;
case 2: 
    printf("monday");
break;
case 3: 
    printf("tuesday");
break;
case 4: 
    printf("wendesday");
break;
case 5: 
    printf("thursday");
break;
case 6: 
    printf("friday");
break;
case 7: 
    printf("saturday");
break;
default :
    printf("invalid input");
}

}