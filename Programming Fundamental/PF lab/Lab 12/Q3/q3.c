#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct data
{
	char id[4];
	char name[20];
	char sex[1];
	int q1,q2,mid,final,total;
};
int main()
{
	struct data s[20];
	FILE *p;
	p=fopen("record.txt","a");
	for (int i=0;i<20;i++)
	{
		fprintf(p,"\n");
		printf("Enter Id:");
		scanf("%s",s[i].id);
		fprintf(p,"%s",s[i].id);
		printf("Enter Name :");
		scanf("%s",s[i].name);
		fprintf(p,"\t%s",s[i].name);	
		printf("Enter Sex:");
		scanf("%s",s[i].sex);
		fprintf(p,"\t%s",s[i].sex);
		printf("Enter Quiz 1:");
		scanf("%d",&s[i].q1);
		fprintf(p,"\t%d",s[i].q1);
		printf("Enter Quiz 2:");
		scanf("%d",&s[i].q2);		
		fprintf(p,"\t\t%d",s[i].q2);
		printf("Enter Mid :");
		scanf("%d",&s[i].mid);		
		fprintf(p,"\t\t%d",s[i].mid);
		printf("Enter Final:");
		scanf("%d",&s[i].final);		
		fprintf(p,"\t%d",s[i].final);
		s[i].total=s[i].q1+s[i].q2+s[i].mid+s[i].final;
		fprintf(p,"\t%d",s[i].total);	
	}	
}












