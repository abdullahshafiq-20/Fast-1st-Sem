#include <stdio.h>
#include <string.h>
#include <math.h>
struct student_marks{
	char subject1[15];
	int sub1mark;
	char subject2[15];
	int sub2mark;
	char subject3[15];
	int sub3mark;
	char subject4[15];
	int sub4mark;
	char subject5[15];
	int sub5mark;
	float percentage;			
};

struct student_details{
	char name[100];
	char address[500];
	char email[250];
	char rollno[10];
	char phone_num[15];
	char parent_name[100];
	char parent_phonenum[15];
	char program[15];
	char section[5];
	struct student_marks marks;
}details;


void info(struct student_details details[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("\nenter student name: ");
		scanf("%s",details[i].name);
		printf("enter guardian name: ");
		scanf("%s",details[i].parent_name);
		printf("enter roll no#: ");
		scanf("%s",details[i].rollno);
		printf("enter your section: ");
		scanf("%s",details[i].section);
		printf("enter your email: ");
		scanf("%s",details[i].email);
		printf("enter your phone no#: ");
		scanf("%s",details[i].phone_num);
		printf("enter your guardian phone no#: ");
		scanf("%s",details[i].parent_phonenum);
		printf("enter your home address: ");
		scanf("%s",details[i].address);
		printf("enter your program: ");
		scanf("%s",details[i].program);		
	}          
}

void percentage(struct student_marks marks[],int num)
{
	int i,sum;
	float per;
	for (i=0;i<num;i++)
	{
		printf("\nEnter the subject name: ");
		scanf("%s",marks[i].subject1);
		printf("Enter the subject marks: ");
		scanf("%d",&marks[i].sub1mark);
		printf("Enter the subject name: ");
		scanf("%s",marks[i].subject2);
		printf("Enter the subject marks: ");
		scanf("%d",&marks[i].sub2mark);
		printf("Enter the subject name: ");
		scanf("%s",marks[i].subject3);
		printf("Enter the subject marks: ");
		scanf("%d",&marks[i].sub3mark);
		printf("Enter the subject name: ");
		scanf("%s",marks[i].subject4);
		printf("Enter the subject marks: ");
		scanf("%d",&marks[i].sub4mark);
		printf("Enter the subject name: ");
		scanf("%s",marks[i].subject5);
		printf("Enter the subject marks: ");
		scanf("%d",&marks[i].sub5mark);
		sum=marks[i].sub1mark+marks[i].sub2mark+marks[i].sub3mark+marks[i].sub4mark+marks[i].sub5mark;
		per=sum*100;
		per=per/500;
		marks[i].percentage=per;
		printf("\npercentage of student %d: ",i+1);
		printf("%.2f%",marks[i].percentage);								
	}
}

/*int display(struct student_details details[],int num)
{
	int i;
	printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s","\nStudent name","Student roll no","Student section","Student email","Student phone no#","Guardian phone no#","student address","student field");
		for(i=0;i<num;i++)
	{
		printf("\n%-10s    %-10s    %-10s    %-10s    %-10s    %-10s    %-10s    %-10s    %-10f",details[i].name,details[i].rollno,details[i].section,details[i].email,details[i].phone_num,details[i].parent_phonenum,details[i].address,details[i].program);
	}
}*/

void add()
{
    char another='y';
    struct student_details details;
    int i;
    float cgpa;

    while(another=='y'||another=='Y')
    {
        printf("\n\n\t\tEnter Full Name of Student: ");
        gets(details.name);

        printf("\n\n\t\tEnter Depertment Name: ");
        gets(details.program);

        printf("\n\n\t\tEnter Roll number: ");
        scanf("%c",&details.rollno);

        printf("\n\n\t\tAdd another student?(Y/N)?");
        scanf(" %c",&another);
    }
}

/*void modify()
{
    struct student_details details;
    int i,flag=0,tempRoll,size=sizeof(details);
    char rollnum[10];
    printf("\nEnter Roll Number of Student to MODIFY the Record : ");
    scanf(" %s",rollnum);

    for(i=0; i<size; i++)
    {
	  flag=strcmp(rollnum,details[i].rollno);//[i] error?//
	  if(flag==1)
	  {
	  	break;
	  }
	}

    if(flag==1)
    {
        printf("\nRecord Found");
        printf("\nStudent Name: %s",details.name);
        printf("\nStudent Roll: %s",details.rollno);
        printf("\nEnter New Data for the student");
        printf("\nEnter Full Name of Student: ");
        gets(details.name);

        printf("\nEnter Department: ");
        gets(details.program);

        printf("\nEnter Roll number: ");
        scanf(" %s",&details.rollno);
    }

    else printf("\nERROR !!!! RECORD NOT FOUND");

    printf("\n");
}*/


int main()
{
	int num;
	char option;
	printf("Enter number of students whose data needs to be entered: ");
	scanf("%d",&num);
	struct student_marks marks[num];
	struct student_details details[num];
	info(details,num);
	percentage(marks,num);
	printf("do u want to add?");
	scanf(" %c",&option);
	add();
	//display(details,num);//
}

