#include<stdio.h>

void ans(char form[],int d)
{
		if(form[d-2]=='H'&&form[d-3]=='O')
	{
		printf("1");
	}	
}

int main()
{
	char form[6];
	printf("Enter Formula: ");
	fgets(form,sizeof(form),stdin);
	//printf("%s",form);
	int d=strlen(form);
	//printf("%d",d);
	//printf("%c",form[d-2]);
	ans(&form[0],d);	
}






