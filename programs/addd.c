
#include <stdio.h>

int main(int argc, char const *argv[])
{
   float rate, qty,total ,dis=0;
    printf("enter an item price \n");
    scanf("%f" ,&rate);
    printf ("enter Quantity \n");
    scanf("%f" ,&qty);
    total= rate * qty ;
    if (total>=1000);
        dis = total/100*10;
    
    printf("%f",dis);
    printf("Total amount %f\n",total);
    return 0;
}
