#include<stdio.h>
#include<stdlib.h>

struct data
{
	int id;
	char name[50];
	
}s[2];
int main()
{
	int n=0;
	FILE *p;
	for (int i=0;i<2;i++)
	{
		scanf("%d",&s[i].id);
		scanf("%s",s[i].name);
	}
	p=fopen("text.txt","w");
	while (n<2)
	{
		fprintf(p,"\n%d %s",s[n].id,s[n].name);
		n++;
	}
	fclose(p);
	char name2[50];
	p=fopen("text.txt","r");
	while(!feof(p))
	{
		for (int i=0;i<2;i++)
		{
			fscanf(p,"\n%d %s",s[i].id,s[i].name);
		}
		break;
    }
	
}
