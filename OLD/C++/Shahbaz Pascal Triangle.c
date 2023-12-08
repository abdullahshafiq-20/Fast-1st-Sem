#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,i,y=123;
	for (i=0;i<=y+1;i++)
	{
		x=y%10;
		printf("%d",x);
		y=y/10;
	}
	
	
	
}