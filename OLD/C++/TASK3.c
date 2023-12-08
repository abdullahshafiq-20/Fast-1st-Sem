#include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks B/W 80_100\n");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Grade A");
	}
	else if(marks>=80) 
	{
		printf("Grade B");
	}
	else if(marks<=89)
	{
		printf("Grade B");
	}
}



