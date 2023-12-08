#include <stdio.h>
int main()
{
	int spendeven,spendodd,totalmoney,leftmoney,i;
	int age =18;
	for (i=0;i<5;i++)
	{
		if (age%2==0)
		{
			spendeven=spendeven+25563;
			printf("\neven%d",spendeven);
		}
		
		else 
		{
			spendodd=spendeven+12580;
			printf("\nodd%d",spendodd);	
		}
		age=age+1;
	}
		totalmoney=spendeven+spendodd;
		leftmoney=100000-totalmoney;
		printf("\n%d",totalmoney);
		printf("\n%d",leftmoney);	
}