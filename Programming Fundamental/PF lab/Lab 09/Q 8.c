#include<stdio.h>
#include<string.h>
int main()
{
	int sum1=0,sum2=0,i;
	char s1[20];
	char s2[20];
	printf("Enter String 1:");
	fgets(s1,sizeof(s1),stdin);
	int d1=strlen(s1);
	printf("Enter String 2:");
	fgets(s2,sizeof(s2),stdin);
	int d2=strlen(s2);
	for (i=0;i<d1-1;i++)
	{
		sum1=sum1+s1[i];
	}
	for (i=0;i<d2-1;i++)
	{
		sum2=sum2+s2[i];
	}
	if (sum1==sum2)
	{
		printf("Strings are Equal.");
	}
	else if (sum1>sum2)	
	{
		printf("Strings are not Equal.");
		printf("\nString1 is Greater.");
	}
	else if(sum1<sum2)
	{
		printf("Strings are not Equal.");
		printf("\nString2 is Greater.");
	}
}


