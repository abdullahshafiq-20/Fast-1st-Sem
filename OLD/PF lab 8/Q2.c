#include<stdio.h>
int main()
{
	char ch[20];
	printf("Enter Word: ");
	scanf("%s",ch);
	printf("You entered:%s",ch);
	int d;
	d=strlen(ch);
	printf("\nReversed Word is:");
	for (int i=d;i>=0;i--)
	{
		printf("%c",ch[i]);
	}	
}