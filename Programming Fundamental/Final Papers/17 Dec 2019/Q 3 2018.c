#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;
	int id;
	char name[20];
	char name1[20];
	int salary;
	int id1;
	FILE *p1;
	FILE *p2;
	FILE *p3;
	p1=fopen("text.txt","w");
	printf("Enter ID");
	scanf("%d",&id);
	fprintf(p1,"\n%d",id);
	printf("Enter Name");
	scanf("%s",name);
	fprintf(p1,"\t%s",name);
	fclose(p1);	
	
	p2=fopen("text1.txt","w");
	printf("Enter ID");
	scanf("%d",&id1);
	fprintf(p2,"\n%d",id);
	printf("Enter Name");
	scanf("%s",name1);
	fprintf(p2,"\t%s",name1);
	fclose(p2);	
	

	p1=fopen("text.txt","r");
	p2=fopen("text1.txt","r");
    p3=fopen("text2.txt","w");
    char ch;
    
	while (n<1)
	{
		fprintf(p3,"%d%s",id,name);
		fprintf(p3,"\n%d %s",id1,name1);
		n++;
	}
	ch=getc(p3);
	fclose(p3);
	p3=fopen("text2.txt","r");
		while (ch!=EOF)
	{
		fscanf(p3,"%d %s",id,name);
		fscanf(p3,"\n%d %s",id1,name1);

	}
















	
}















