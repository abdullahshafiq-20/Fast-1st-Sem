#include<stdio.h>
int main()
{
	char form[20];
	printf("Enter string;");
	fgets(form,sizeof(form),stdin);
	//printf("%s",form);
	int d=strlen(form);
	//printf("%d",d);
	//printf("%c",form[d-2]);
	if((form[d-2]=='Y')||(form[d-2]=='y'))
	{
		
		for (int i=0;i<d-2;i++)
		{
			printf("%c",form[i]);
		}
		printf("ies");
	}
	else if ((form[d-2]=='s')||(form[d-2]=='ch')||(form[d-2]=='sh'))
	{
		for (int i=0;i<d-2;i++)
		{
			printf("%c",form[i]);
		}
		printf("es");		
	}
	else 
	{
		for (int i=0;i<d-2;i++)
		{
			printf("%c",form[i]);
		}
		printf("s");
		
	}	
}








