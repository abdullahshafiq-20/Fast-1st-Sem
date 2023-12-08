#include<stdio.h>
void function(int i,int n,int p)
{
	int payment; 
	payment=i*p/1-(1+i)-n;
	printf("\nMonthly Payment %d$",payment);
	printf("\nAmmount Borrowed %d$",p);
}
int main()
{
	int purchsed_price,down_payment,i,n,p;
	printf("Enter Purchased price:");
	scanf("%d",&purchsed_price);
	printf("Enter Down Payment:");
	scanf("%d",&down_payment);
	printf("Enter Annual Interest Rate:");
	scanf("%d",&i);
	printf("Enter Number of Payments:");
	scanf("%d",&n);
	printf("Enter Borrowed Amount:");
	scanf("%d",&p);
	function(i,n,p);
}





