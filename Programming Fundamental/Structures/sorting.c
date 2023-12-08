#include<stdio.h>
struct shahbaz
{
	char a;
};
int main()
{
	int temp=0,i,j;
	struct shahbaz a1[10];
	scanf("%s",a1);
	for (i=0;i<10;i++)
	{
		for (j=i+1;j<10;j++)
		{
			if(a1[i].a>a1[j].a)
			{
				temp=a1[i].a;
				a1[i].a=a1[j].a;
				a1[j].a=temp;
			}
		}
	}
	for (i=0;i<10;i++)
	{
		printf("%c",a1[i].a);
	}
	

}