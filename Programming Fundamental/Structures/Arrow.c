#include<stdio.h>
struct shahbaz
{
	char s[100];
};
int main()
{
	int i=0;
	struct shahbaz s1={"Shahbaz"};
	struct shahbaz *p1;
	p1=&s1;
	for (i=0;i<7;i++)
	{
		printf("%c",p1->s[i]);
	}
}