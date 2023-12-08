#include<stdio.h>
int main()
{
	char a[10]={"Abdullah"};
	int y=strlen(a);
	int i;
	char *pt=a;
	for (i=y;i>=0;i--)
	{
		printf("%c",*(pt+i));
	}	
}