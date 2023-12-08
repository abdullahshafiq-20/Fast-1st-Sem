#include <stdio.h>
int main()
{
	int x,y,z;
	printf("Enter 3 NUMBERS: ");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{
	printf("%d is gretaer",x);
	}
	else if(y>z)
	{
    printf("%d is gretaer",y);
	}
	else if (z>x)
	{
    printf("%d is gretaer",z);
	}
		
}

