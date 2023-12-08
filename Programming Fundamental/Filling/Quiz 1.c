#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int enc()
{
	int i=0;
	char text[100];
	FILE *p;
	printf("Enter Text You want to Encrypt:");
	fgets(text,100,stdin);
	
	p=fopen("data.txt","w+");
	for (i=0;i<strlen(text)-1;i++)
	{
		fprintf(p,"%c",text[i]);
	}
	fclose(p);
	char ch;
	p=fopen("data.txt","a+");
	while((ch=fgetc(p))!=EOF)
	{
		if(ch==' ')
		{
			printf(" ");
			continue;
		}
		printf("%c",ch+2);
	}
	fclose(p);
	return 0;
}	
int dec()
{
	
	int i=0;
	char text[100];
	FILE *p;	
	printf("\nEnter Text You want to Decrypt:");
	fgets(text,100,stdin);
	
	p=fopen("data.txt","w+");
	for (i=0;i<strlen(text)-1;i++)
	{
		fprintf(p,"%c",text[i]);
	}
	fclose(p);
	char ch;
	p=fopen("data.txt","a+");
	while((ch=fgetc(p))!=EOF)
	{
		if(ch==' ')
		{
			printf(" ");
			continue;
		}
		printf("%c",ch-2);
	}
	fclose(p);
}
int main()
{

	enc();
	dec();
	
}