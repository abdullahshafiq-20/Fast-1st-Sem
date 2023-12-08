#include<stdio.h>
int main()
{
	int array[50];
	int i,j,k=10;
	for (i=1;i<=50;i++)
	{
		if (i<0&&i<=25)
		{
			array[i]=i*i;
		}
		else if (i>25&&i<=50)
		{
			array[i]=3*i;
		}	
	}
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=10;j++)
		{
			printf("%d ",array[j]);
		}
		printf("\n");
		k=k*i;
	}
	
	
	
	
	
	
	
}