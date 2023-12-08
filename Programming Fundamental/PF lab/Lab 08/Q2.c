#include<stdio.h>
int main()
{
	int i=0;
	char ch[20];
	printf("Enter Word: ");
	scanf("%s",ch);
	printf("You entered:%s",ch);
	int d;
	d=strlen(ch);
	printf("\nReversed Word is:");
	for ( i=d;i>=0;i--)
	{
		printf("%c",ch[i]);
	}	
}










