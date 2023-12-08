#include<stdio.h>
int main()
{
	int i;
	char a[15]={"Pakistan v"};
	char *pt[15];
	for (i=0;i<15;i++)
	{
		pt[i]=&a[i];
    }
	for (i=0;i<15;i++)
	{
		if (*pt[i]==' ')
		{
			//printf("%d",i);
			*pt[i-1]=*pt[i-1]-32;
			*pt[i+1]=*pt[i+1]-32;
			//printf("%c",*pt[i-1]);
			//printf("\n%c",*pt[i+1]);
		}
	}
	for (i=0;i<15;i++)
	{
		printf("%c",*pt[i]);
	}	
}