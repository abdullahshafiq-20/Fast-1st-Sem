#include<stdio.h>
int main()
{
	int stop;
	char r[10];
	char num[10];
	int count=0;
	int i;
	printf("Enter Number: ");
	fgets(num,sizeof(num),stdin);
	int d=strlen(num);
	//printf("%d",d);
	for (i=0;i<d-1;i++)
	{
		printf("%c",num[i]);
		if(num[i]=='.')
		{
			stop=i;
			break;
		}	
	}
	for(i=d-2;i>stop+2;i--)
	{
		if (num[i]>='5')
		{
			//printf("True");
			num[i-1]=num[i-1]+1;
		}
		else if(num[i]=='.')
		{
			break;
		}
	}
	for(i=stop+1;i<d-2;i++)
	{
		printf("%c",num[i]);
	}
}




