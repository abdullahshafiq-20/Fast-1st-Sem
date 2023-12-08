#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
	char name[50];
	char adress[50];
	int tele;
}s[20];
int main()
{
	FILE *p;
	p=fopen("text.txt","a");
	int option;
	scanf("%d",&option);
	switch (option)
	{
		case 1:
			{
				printf("Enter New Record:");
				scanf("%s %s %d",s[0].name,s[0].adress,&s[0].tele);
				fprintf(p,"%s %s %d",s[0].name,s[0].adress,s[0].tele);
			}
	}
	
	
	
	
}