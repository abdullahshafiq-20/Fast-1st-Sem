#include<stdio.h>

void s(int a)
{
	if(a>1)
	{
		
		s(a-1);
	}
	for(int i=0;i<a;i++)
	{
		printf("*");
	}
	printf("\n");
	
}
int main()
{
	int a=4;
		
	s(a);
}