#include<stdio.h>
void reverse(char a[],int size)
{
	int i=0;

	for (i=size;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
int main()
{
	char a[20];
	printf("enter Code:");
	scanf("%s",a);
	int size=strlen(a);
	reverse(&a[0],size);	
}