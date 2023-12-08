#include <stdio.h>


struct dob{
	int day;
	int month;
	int year;
};
struct person{
	struct dob d;
	char name[10];
};

int main()
{
	int i;
	struct person p[2];
	for(i=0;i<1;i++)
	{
		printf("\nEnter name: ");
		scanf("%s", p[i].name);
		printf("\nEnter date of birth: ");
		scanf("%d %d %d", &p[i].d.day, &p[i].d.month, &p[i].d.year);
	}
	for(i=0;i<2;i++)
	{
		printf("\nName: %s", p[i].name);
		printf("\nDate of birth: %d %d %d", p[i].d.day, p[i].d.month, p[i].d.year );
	}
}
	
