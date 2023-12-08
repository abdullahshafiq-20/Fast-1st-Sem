#include<stdio.h>
#include<string.h>
struct data
{
	char name[20];
};
void check()
{
	char replaced[6]={"Robert"};
	char name1[20];
	printf("Enter name for checking");
	gets(name1);
	//printf("[%s]",name1);
	struct data s[2];
	for (int i=0;i<2;i++)
	{
		gets(s[i].name);	
	}
	for (int j=0;j<2;j++)
	{
		if (strcmp(s[j].name,name1)==0)
		{
			
			strcpy(s[j].name,replaced);
		}
	}
	for (int k=0;k<2;k++)
	{
		printf("%s",s[k].name);
	}


	
}
int main()
{
	check();
}