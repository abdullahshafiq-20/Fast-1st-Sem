#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char tool_name[20];
	int quantity;
	float cost;
	int record;
	FILE *p;
	p=fopen("hardware.txt","a");
	for (int i=0;i<10;i++)
	{
		printf("Enter Record #:");
		scanf("%d",&record);
		printf("Enter Tool Name:");
		scanf("%s",tool_name);
		printf("Enter Quantity:");
		scanf("%d",&quantity);
		printf("Enter Cost:");
		scanf("%f",&cost);
		fprintf(p,"%d -- %s -- %d -- %.1f\n",record,tool_name,quantity,cost);
	}
	fclose(p);	
}





