#include <stdio.h>
int main()
{
	int spendeven,spendodd,totalmoney,leftmoney,i;
	int age =18;
	printf("Age:%d",age);
	for (i=0;i<5;i++)
	{
		if (age%2==0)
		{
			spendeven=spendeven+25563;
		}
		else 
		{
			spendodd=spendeven+12580;
		}
		age=age+1;
	}
		totalmoney=spendeven+spendodd;
		leftmoney=100000-totalmoney;
		printf("\nTotal Money: %d",totalmoney);
		printf("\nLeft Money: %d",leftmoney);	
}






