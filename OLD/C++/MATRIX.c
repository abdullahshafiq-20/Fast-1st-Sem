#include <stdio.h>
int main()
{
	int a [9]={1,2,3,4,5,6,7,8,9};
	int test=0,t,i;
	for (i=0;i<3;i++)
	{
		for (t=0;t<3;t++)
		{
			printf(" %d",a[test]);
			test++;	
		}
		printf("\n");
	}
	for (int y=0;y<9;y++)
	{
		printf("\n%d",a[y]);	
	}
    
}






