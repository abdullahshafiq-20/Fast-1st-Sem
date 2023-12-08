#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct details
{
	int id;
	char name[20];
	int marks;
	int grade;
};
int main()
{
	struct details *ptr;
	int n;
	printf("Enter Number of records: ");
	scanf("%d",&n);
	ptr=(struct details *)malloc(n * sizeof(struct details));
	for (int i=0;i<n;++i)
	{
		printf("Enter Id, Name, Marks, Grade: ");
		scanf("%d %s %d %d",&(ptr+i)->id,&(ptr+i)->name,&(ptr+i)->marks,&(ptr+i)->grade);
	}
	printf("Displaying Detals:\n");
	for (int i=0;i<n;++i)
	{
		printf("ID: %d\nName: %s\nMarks: %d\nGrade:%d",(ptr+i)->id,(ptr+i)->name,(ptr+i)->marks,(ptr+i)->grade);
	}
	free(ptr);
}










