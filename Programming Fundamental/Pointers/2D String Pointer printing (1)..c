#include<stdio.h>
int main()
{
	int i,j;
	char a[2][10]={{"Abdullah"},{"SAST"}};
	char *pt[2][10];
	for (i=0;i<10;i++)
	{
		*pt[1][i]=&a[1][i];
	}
	for (i=0;i<2;i++)
	{
	for (j=0;j<10;j++)
	{
		printf("%c",*pt[i][j]);
	}		
	}	
}