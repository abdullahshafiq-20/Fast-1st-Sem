#include<stdio.h>
struct school
{
	char sch_name[20];
	int sch_id;
};
struct student
{
	struct school sc[1];
	int stu_id;
	char stu_name[20];
	int marks;
	float avg;
};
void getData ()
{
	int i,n;
	struct student st[1];
	printf("Enter Name Of School:");
	scanf(" %s",st[1].sc[1].sch_name);
	printf("Enter School ID:");
	scanf(" %d",&st[1].sc[1].sch_id);
	printf("How many Records You want to enter:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter Student ID:");
		scanf(" %d",&st[i].stu_id);
		printf("Enter Name:");
		scanf(" %s",st[i].stu_name);
		printf("Enter Marks:");
		scanf(" %d",&st[i].marks);
		printf("Enter Average:");
		scanf(" %f",&st[i].avg);
		printf("\n");
	}
	for (i=0;i<n;i++)
	{
		printf("\n----------------");
		printf("\nStudent Id: %d",st[i].stu_id);
		printf("\nName: %s",st[i].stu_name);
		printf("\nMarks: %d",st[i].marks);
		printf("\nAverage: %f",st[i].avg);	
	}
}
int main()
{
	getData();	
}








