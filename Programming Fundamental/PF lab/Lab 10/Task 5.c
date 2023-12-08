#include<stdio.h>
struct details
{
	char name[20];
	int acc_num;
	int balance;
	char info[20];
};
void print()
{
	int i;
	struct details a[10];
	for (i=0;i<2;i++)
	{
	    printf("Enter Name:");
	    scanf(" %s",a[i].name);
		printf("Enter Account Number:");
		scanf("%d",&a[i].acc_num);
		printf("Enter Balence:");
		scanf("%d",&a[i].balance);
		printf("Enter Info:");
		scanf(" %s",a[i].info);	
		printf("\n");	
	}
	printf("\nCostumers Having Balance less than 200$.");
	for (i=0;i<2;i++)
	{
		if(a[i].balance<200)
		{
			printf("\nName: %s",a[i].name);
		}
	}
	printf("\nIncremented Value After Adding 100$");
	for (i=0;i<2;i++)
	{
		if(a[i].balance>1000)
		{
			a[i].balance=a[i].balance+100;
			printf("\nName: %s",a[i].name);
			printf("\nIncrimented Value: %d",a[i].balance);
		}
	}		
}
int main()
{
	print();
}





