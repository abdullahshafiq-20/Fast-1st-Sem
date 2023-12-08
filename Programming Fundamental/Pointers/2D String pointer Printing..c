#include <stdio.h>
int main()
{
	char a[2][3]={{"SAS"},{"SeS"}};
	char *pt[2][3];
	int i,j;
	for (i=1;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			pt[i][j]=&a[i][j];
		}
	}
	for (i=1;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%c ",*pt[i][j]);
		}
		printf("\n");
	}
}
