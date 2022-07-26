//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main()
{
    int cp,sp,profit,loss,profit_percentage,loss_percentage;
    printf("Enter the cost and selling price of product: ");
    scanf("%d %d",&cp,&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        profit_percentage=(profit*100)/cp;
        printf("Profit percentage is %d",profit_percentage);
    }
    else if(sp<cp)
    {
        loss=cp-sp;
        loss_percentage=(loss*100)/cp;
        printf("Loss percentage is %d",loss_percentage);
    }
    else
        printf("There is no loss no profit");
    return 0;
}
