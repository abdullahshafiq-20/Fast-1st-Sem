#include<stdio.h>
#include<string.h>
int main()
{
	int start,end,i;
	char a[50];
	printf("Enter Line:");
	fgets(a,sizeof(a),stdin);
	int d=strlen(a);
	//printf("%d",d);
	for (i=0;i<d-1;i++)
	{
		if (a[i]==' ')
		start=i;
	}
	for (i=start;i<d;i++)
	{
		if (a[i]==' ')
		end=i;		
	}
	for (i=end+1;i<d-1;i++)
	{
		printf("%c",a[i]);
	}
    printf(" and ");
	
	for (int j=0;j<start-3;j++)
	{
		printf("%c",a[j]);
	}		
}






