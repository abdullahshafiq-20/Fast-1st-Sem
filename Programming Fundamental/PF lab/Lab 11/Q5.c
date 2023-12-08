#include<stdio.h>
#include<string.h>
void even(int a[])
{
	int *ptr[10];
	int i;
	int count=0;
	for (i=0;i<10;i++)
	{
		ptr[i]=&a[i];
	}
	for (i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			count++;
		}
	}
	printf("There are [%d] even Numbers in the Givne data.",count);	
}
int main()
{
	int a[10]={2,5,7,8,3,6,10,34,67,56};
	even(&a);
}







