#include<stdio.h>
struct list 
{
	char value;
	struct list *ptr;
};
int main()
{
	struct list n1,n2,n3;
	int i=0;
	n1.value='A';
	n2.value='B';
	n3.value='C';
	n1.ptr=&n2;
	n2.ptr=&n3;
	n2.ptr->value;
	printf("%c %c ",n1.ptr->value,n2.ptr->value);
}