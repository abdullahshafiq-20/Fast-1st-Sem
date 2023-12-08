#include<stdio.h>
struct details
{
	int e_num;
	char name[20];
	int salary;
};
int main()
{
	int n_e,i,j,temp=0;
	printf("Enter Number of Employee:");
	scanf("%d",&n_e);
	struct details a[n_e];
	for(i=0;i<n_e;i++)
	{
	   printf("Employee Number:");
	   scanf("%d",&a[i].e_num);
	   printf("Enter Name:");
	   scanf("%s",a[i].name);
	   printf("Enter Salary:");
	   scanf("%d",&a[i].salary);	
	}
	for(i=0;i<n_e;i++)
	{
		printf("\n---------------------");
		printf("\nEmployee Number: %d",a[i].e_num);
		printf("\nName           : %s",a[i].name);
		printf("\nSalary         : %d",a[i].salary);
	}
	for (i=0;i<n_e;i++)
	{
		for (j=i+1;j<n_e;j++)
		{
			if(a[i].salary<a[j].salary)
			{
				temp=a[i].salary;
				a[i].salary=a[j].salary;
				a[j].salary=temp;
			}
		}
	}
	for (i=0;i<n_e;i++)
	{
		if(a[i].salary==a[0].salary)
		{
			printf("\n---------------------");
			printf("\nHighest Salary Emplyee Detail:");
		    printf("\nEmployee Number: %d",a[i].e_num);
		    printf("\nName           : %s",a[i].name);
		    printf("\nSalary         : %d",a[i].salary);		
		}
	}	
}





