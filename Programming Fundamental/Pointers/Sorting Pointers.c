#include<stdio.h>
int main()
{
	int a[5]={6,7,4,8,9};
	int *pt;
	pt=a;
	int i,j,temp;
	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if(*(pt+i)>*(pt+j))
			{
				temp=*(pt+i);
				*(pt+i)=*(pt+j);
				*(pt+j)=temp;
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%d",*(pt+i));
	}
	
	
	
	
	
}