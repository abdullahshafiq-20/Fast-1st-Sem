#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int count,count1,i,j;
    char temp;
	char text[100];
	FILE *p1;
	FILE *p2;
	p1=fopen("file.txt","r");
	if (p1==NULL)
	{
		printf("No");
	}
    while (fgets(text,100,p1))
    {
    	printf("%s",text);	
	}
	for (i=0;i<strlen(text);i++)
	{
		for (j=0;j<strlen(text);j++)
		{
			if(text[i]<text[j])
			{
			    temp=text[i];
			    text[i]=text[j];
			    text[j]=temp;				
			}
		}
	}
	for ( i=0;i<strlen(text);i++)
	{
		for ( j=0;j<strlen(text);j++)
		{
			if (text[i]==text[j])
			{
				count++;
			}
		}
		if (text[i]!=text[i+1])
		{
			p2=fopen("file1.txt","a");
			fprintf(p2,"\nOccurannce of %c is %d",text[i],count);
			fclose(p2);
			count1++;
		}
		count=0;
	}
	char data[count1][20];
	int line=0;
	p2=fopen("file1.txt","r");
	while(!feof(p2))
	{
        if(fgets(data[line],1000,p2)!=NULL)
        {
    		printf("%s",data[line]);
		    line++;    	
		}
	}
}





















