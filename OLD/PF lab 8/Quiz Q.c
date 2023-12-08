#include<stdio.h>
int main()
{
	char  num[13];
	printf("Enter ISBN Number:");
	scanf("%s",num);
	for (int i=0;i<13;i++)
	{	
	    printf("%c,",num[i]);				
	}	
}