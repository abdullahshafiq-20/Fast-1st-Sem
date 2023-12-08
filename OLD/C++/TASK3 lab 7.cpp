#include <stdio.h>
int main()
{
	int i,age,evenyear,oddyear,money=0,sold=0,total,a;
	printf("Enter Age:");
	scanf("%d",&age);
	for (i=1;i<=age;i++)
	{
		if (i%2==0)
		{
			money=money+200;
			money=money-30;	
		}
		else
		{
			sold=sold+130;	
		}	
	}
	total=money+sold;
	printf("\nTotal money Saved:%d",total);
	if (total>=10000)
	{
		printf("\nYou can buy Washing machine");
	}
	else 
	{
		printf("\nYou can not buy washing machine");
	}
}


















