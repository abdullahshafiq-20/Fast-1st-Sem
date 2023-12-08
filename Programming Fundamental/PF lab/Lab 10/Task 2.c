#include<stdio.h>
struct distance
{
	int feet;
	int inches;
	int total;
};
void adddistance()
{
	struct distance l;
	printf("Enter Feets:");
	scanf("%d",&l.feet);
	printf("Enter Inches:");
	scanf("%d",&l.inches);
	l.total=l.feet+l.inches;
	printf("Addition is:%d",l.total);
}
int main()
{
	adddistance();
}



