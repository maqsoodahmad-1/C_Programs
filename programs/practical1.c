/*the  code is written on 28/12/2020 to develop a c program that accept an amount as input and calculate the indian currency
 (in Rupees) to pay the amount note :Currency used: RS.100,RS.50,RS.20,RS.10,RS.5,RS.2 and RS.1*/
#include <stdio.h>
void main()
{unsigned int amount,r;
printf("Enter Amount\n");
scanf("%u",&amount);
r = amount/100;
printf("RS. = 100 %u\n",r);
amount=amount%100;
r=amount/50;
printf("RS. = 50 %u\n",r);
amount=amount%50;
r=amount/20;
printf("RS. = 20 %u\n",r);
amount=amount%20;
r=amount/10;
printf("RS. = 10 %u\n",r);
amount=amount%10;
r=amount/5;
printf("RS. = 5 %u\n",r);
amount=amount%5;
r=amount/2;
printf("RS. = 2 %u\n",r);
amount=amount%2;
r=amount/1;
printf("RS. = 1 %u\n",r);

 }