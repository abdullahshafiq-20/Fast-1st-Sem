#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	fgets(a,sizeof(a),stdin);
	char s[20]=" ";
	char *token=strtok(a,s);


	while (token!=NULL)
	{

		printf("\n%s ",token);
		token =strtok(NULL,s);
	}
	
	
	
	
	
	
	
	
	
	
	
	
		
}