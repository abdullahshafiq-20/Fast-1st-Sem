#include<stdio.h>
struct a
{
	int a,b;
	char c;
	
};
   int main()
{
	struct a a1,a2;
	a1.a=10;
	a1.b=20;
	a1.c='A';
	a2.a=a1.b+a1.a;
	printf("%d %d %c ",a2.a,a1.b,a1.c);
}