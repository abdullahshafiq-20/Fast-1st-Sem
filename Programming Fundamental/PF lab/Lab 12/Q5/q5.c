#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	float data[10][3];
	float sum_col1,sum_col2,sum_col3;
	FILE *p;
	p=fopen("budge.txt","a");
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<3;j++)
		{
			scanf("%f",&data[i][j]);
			fprintf(p,"%f ",data[i][j]);
		}
		printf("\n");
		fprintf(p,"\n");
	}
	for (int i=0;i<10;i++)
	{
		sum_col1=sum_col1+data[i][0];
		sum_col2=sum_col2+data[i][1];
		sum_col3=sum_col3+data[i][2];
	}
	printf("Columns Sums are:\n");	
	printf("%.1f--%.1f--%.1f",sum_col1,sum_col2,sum_col3);
}








