#include<stdio.h>
struct shahbaz
{
	char a;
};
int main()
{
	int i;
	struct shahbaz a1[11];
	fgets(a1,sizeof(a1),stdin);
	for (i=0;i<11;i++)
	{
		//printf("%c",a1[i].a);
		if (a1[i].a==' ')
		{
			//printf("%c",a1[i].a);
			a1[i-1].a=a1[i-1].a-32;
			a1[i+1].a=a1[i+1].a-32;
		}	
	}
	for (i=0;i<11;i++)
	{
		printf("%c",a1[i].a);
	}
	

}