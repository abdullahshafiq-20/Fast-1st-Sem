#include<stdio.h>
int main()
{
    int n,i;
   float minibus,train,truck,Avg,tc,c,price;

    printf("Enter How many seperate tons you will give: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter weight of the Cargo:");
        scanf("%f",&c);
        tc=c+tc;
        if(c<=3)
        {
            price=price+(200*c);
            minibus=minibus+c;  
        }
        else if((3<c)&&(11>=c))
        {
            price=price+(175*c);
            truck=truck+c;
        }
        else if (c>11)
        {
            price=price+(120*c);  
            train=train+c;
        }
    }
    Avg=price/tc;
    printf("Total price:%.1f\n",price);
    printf("Sum of all cargo is:0 %f\n",tc);
    printf("The average price per ton of the cargo is %.1f\n",Avg);
    printf("Percentage weight carried by minibus:%.1f\n ",(minibus/tc)*100);
    printf("Percentage weight carried by truck:%.1f\n ",(truck/tc)*100);
    printf("Percentage weight carried by train:%.1f\n ",(train/tc)*100);
    printf("minibus transports :%.1f\n",minibus);
    printf("truck transports :%.1f\n",truck);
    printf("train transports :%.1f\n",train);
}









