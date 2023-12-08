#include<stdio.h>
struct one 
{
	char name[20];
};
struct two
{
	struct one a;
	int day;
	int month[20];
	int year;
};
int main()
{
	struct two b[1];
	printf("Enter Name:");
	scanf("%s",b[1].a.name);
	printf("Enter Date of Birth:\n");
	scanf("\n%d%s%d",&b[1].day,b[1].month,&b[1].year);
	printf("\nName:%s",b[1].a.name);
	printf("\nDate Of Birth:%d %s %d ",b[1].day,b[1].month,b[1].year);	
}







