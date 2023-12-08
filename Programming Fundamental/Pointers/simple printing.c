#include<stdio.h>
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
	
	for (i=0;i<5;i++)
	{
		printf("%c\n",*pt[i]);
		//printf("%d\n",*(pt++));
	}
	
	
	
	
	
	
}