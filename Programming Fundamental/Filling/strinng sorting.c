#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Enter Number of Words:");
	scanf("%d",&n);
	char word[n][20];
	char temp[20];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d Word:",i+1);
		scanf("%s",word[i]);
	}
	for (int i=0;i<n;i++)
	{
		printf("%s",word[i]);
		printf("\n");
	}
	for (int i=1;i<n;i++)
	{
		for (int j=1;j<n;j++)
		{
			if (strcmp(word[j-1],word[j])>0)
			{
				strcpy(temp,word[j-1]);
				strcpy(word[j-1],word[j]);
				strcpy(word[j],temp);
			}
		}
	}
	char text[20];
	printf("Enter word to be searched:\n");
	scanf("%s",text);
	for (int i=0;i<n;i++)
	{
		if (strcmp(word[i],text)==0)
		{
			printf("Searched Succesfully.");
			printf("\n[%s]",word[i]);
		}
	}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}