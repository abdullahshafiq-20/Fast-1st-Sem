#include<stdio.h>
struct shahbaz
{
	char s[2][100];
};
int main()
{
	int i=0;
	struct shahbaz s1={"Shahbaz","Atif"};
	struct shahbaz *p1;
	p1=&s1;
	for (i=0;i<7;i++)
	{
		
	}
	for (i=0;i<7;i++)
	{
		printf("%c",p1->s[1][i]);
	}
}