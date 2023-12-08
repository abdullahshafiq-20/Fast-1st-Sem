#include<stdlib.h>
int main()
{
	int x;
	printf("Enter the light intensity: ");
	scanf("%d",&x);
	
	if (x>=0&&x<=100)
	{
		printf("it's evening");
	}
	else
	{
		if(x>=101&&x<=500)
		printf("lighting");
		else
		printf("it's exposed under sunshine");
	}
}





