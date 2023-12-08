#include <stdio.h>
int main()
{
	int a1[9];
	for (int i=0;i<9;i++)
	{
		int a=rand();
		int b=a%2;
		a1[i]=b;
		printf("\n%d",a1[i]);
	}
	
	
	
}