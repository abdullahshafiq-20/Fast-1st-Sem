#include<stdio.h>

void swap(int *r,int *s);
int main()
{
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int *p,*q;
	p=a;
	q=b;
	 swap(&p,&q);
}
void swap(int *r,int *s)
{
	int temp;
	temp=*r;
	*r=*s;
	*s=temp;
	printf("%d %d",*r,*s);
}