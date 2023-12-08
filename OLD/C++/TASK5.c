#include <stdio.h>
int main()
{
	int x;
	printf("enter a Year:");
	scanf("%d",&x);
	if(x%4==0)
	{
		if(x%400==0)
		{
			printf("%d Year is LEAP",x);
		}
    }
	else 	
	{
		printf("%d Year is not LEAP",x);
	}		
}




