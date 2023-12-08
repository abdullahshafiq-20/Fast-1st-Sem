#include <stdio.h>
#include <string.h>
void palen(char *str)
{
	char str1[20];
	for (int i=0;i<strlen(str);i++)
	{
		str1[i]=str[i];
	}
	if(strcmp(str,strrev(str1))==0)
	{
		printf("yes");
	}
	else 
	{
		printf("not");	
	}
}
int main()
{
	char str[20];
	scanf("%s",str);
	palen(str);	
}
		
	
	
	