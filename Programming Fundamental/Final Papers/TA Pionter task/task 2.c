#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int k;
	scanf("%d",&k);
	int a[]={1,3,5,7,9};
	for (int i=4;i>=5-k;i--)
	{
		printf("[%d],",a[i]);
	}
	for (int i=k-1;i<4;i++)
	{
		printf("%d,",a[i]);
	}
	
	
	
	
	
	
	
	
	
	
}