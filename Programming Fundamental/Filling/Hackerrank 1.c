#include<stdio.h>
#include<string.h>
int  main()
{
	char num[1][1000];
	int count=0;
	int i,j;
	scanf("%s",num);
	if(strlen(num)>=1&&strlen(num)<=1000)
	{
		for (i=0;i<strlen(num)-1;i++)
		{
			for (j=0;j<=9;j++)
			{
				if(num[1][i]==j)
				{
					count++;
					printf("[%d]",j);
				}
			}
			printf("%d ",count);
			count=0;	
		}
	}
	
	
	
	
	
	
}