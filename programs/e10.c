/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.*/
#include<stdio.h>
void main()
{
    int selling_price,cost_price,profit,loss;
    printf("enter the cost price and selling price of an item \n ");
    scanf("%d%d",&cost_price,&selling_price);
    if(selling_price>cost_price)
    {
        profit=selling_price-cost_price;
        printf("the profit made by seller is %d\n",profit);
    }
    else if(cost_price>selling_price)
    {
        loss=cost_price-selling_price;
        printf("the loss incurred by seller is %d\n",loss);
    }
    else
    {
        printf("no profit is made or no loss is incurred by a seller\n");
    }
}