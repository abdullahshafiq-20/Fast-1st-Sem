#include<stdio.h>
struct shahbaz
{
	char s[2][10];
};
void s2()
{
	int i=0;
	struct shahbaz s1={"Shahbaz","owais"};
	struct shahbaz *p1;
	p1=&s1;
	for (i=0;i<7;i++)
	{
		printf("%c",p1->s[0][i]);
	}
}
int main()
{
	s2();
}