#include<stdio.h>
struct shahbaz
{
	int a,b,c;
};
int main()
{
	int sum=1;
	int i=0;
	struct shahbaz a1[3];
	for (i=0;i<3;i++)
	{
		a1[i].a=sum++;
		a1[i].b=sum++;
		a1[i].c=sum++;
	}
	for (i=0;i<3;i++)
	{
		printf("\n%d %d %d ",a1[i].a,a1[i].b,a1[i].c);
	}
	
}