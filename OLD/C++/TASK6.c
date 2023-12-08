#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three Sides of triangle\n");
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	scanf("\n%d",&c);
	if (a==b)
	{
		if(b==c)
		{
			if(c==a)
			{
				printf("Equilateral triangle");
			}
		}
	}
	else if (b==c)
	{
		printf("Isosceles triangle");
	}
	else if(c==a)
	{
		printf("Isosceles triangle");
	}
		else if(a==b)
	{
		printf("Isosceles triangle");
	}
	else 
	{
		printf("Scalene triangle");
	}
}



