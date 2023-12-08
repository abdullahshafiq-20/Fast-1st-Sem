#include<stdio.h>
#include<stdlib.h>
int main()
{
	char text[100];
	FILE *p1;
	FILE *p2;
	FILE *p3;
	p1=fopen("q1a.txt","w");
	if(p1==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	printf("Enter Some text to store in File 1:\n");
	scanf("%s",text);
	fprintf(p1,"%s",text);
	fclose(p1);
	p2=fopen("q1b.txt","w");
	if(p2==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	printf("Enter Some text to store in File 2:\n");
	scanf("%s",text);
	fprintf(p2,"%s",text);
	fclose(p2);
	
	p1=fopen("q1a.txt","r");
	p2=fopen("q1b.txt","r");
	p3=fopen("q1c.txt","w");
	while(fscanf(p1,"%s",text)!=EOF)
	{
		fprintf(p3,"%s",text);
	}
	while(fscanf(p2,"%s",text)!=EOF)
	{
		fprintf(p3,"%s",text);
	}
	fclose(p1);
	fclose(p2);
	fclose(p3);
	p3=fopen("q1c.txt","r");
	while(!feof(p3))
	{
		fscanf(p3,"%s",text);
		printf("The merged text is %s",text);
	}
}




































	

	
	
	
	
	
	
	
	
	
	
	
	
	