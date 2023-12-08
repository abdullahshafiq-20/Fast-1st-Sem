#include<stdio.h>
#include<string.h>
void wordcount(char a[],int d)
{
	int i;
	int count=0;
	char *ptr[20];
	for (i=0;i<d;i++)
	{
		ptr[i]=&a[i];
	}
	for (i=0;i<d;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
		else if (a[i]=='\0')
		{
			count++;
		}
	}
	printf("%d",count);
}
int main()
{
	char a[20];
	fgets(a,sizeof(a),stdin);
	int d=strlen(a);
	wordcount(&a,d);
}







