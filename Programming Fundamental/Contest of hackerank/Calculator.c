#include <stdio.h>

int main()
{
	int a,b, z;
	char c;
	
	scanf("%d%c%d", &a, &c, &b);
	switch(c)
	{
		case '+':
			{
				z=a+b;
				printf("%d",z);
			}break;
		case '-':
			{
				z=a-b;
				printf("%d",z);
			}break;
		case '*':
			{
				z=a*b;
				printf("%d",z);
			}break;
		case '/':
			{
				z=a/b;
				printf("%d",z);
			}break;
	}

	
}