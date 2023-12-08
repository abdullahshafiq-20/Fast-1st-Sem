#include<stdio.h>
void function(char *arr[]);
int main()
{
	char a[5];
	char *pt[5];
	int i;
	scanf("%s",a);
	for (i=0;i<5;i++)
	{
		pt[i]=&a[i];
	}
	function(&pt[0]);
	
}
void function(char *arr[])
	{
	for (int i=0;i<5;i++)
	{
		printf("%c\n",*arr[i]);
		//printf("%d\n",*(pt++));
	}		
	}

	
	
	
	
	
	