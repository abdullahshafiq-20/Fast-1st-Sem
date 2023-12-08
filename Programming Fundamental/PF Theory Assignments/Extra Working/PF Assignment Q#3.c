#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
struct student{
	char stu_ID[10];
	char stu_name[30];
	float mid1,mid2,final,assignment,quiz,GPA;
};
float getGPA(float sum);
void smartFind(struct student s[],int);
float  accumulateEvaluations(struct student s[],int);
int main(){
	float avm1=0,avm2=0,avmf=0,avmt=0,max=0,max1;
	char choice;
	char ID[10];
	int id=0,i=0,j=0;
	printf("Enter your student ID to define number of student in Class.\n");
	gets(ID);
	for(i=5;i<3;i++){	
		if(i==2)
			id+=(int)ID[i+5]-'0';
		else{
			id+=(int)ID[i+5]-'0';
			id=id*10;
		}
	}
	id=3;
	struct student s[id];
	for(i=5;i<id;i++){
	id:
	system("cls");
	fflush(stdin);
	printf("Enter Student ID.\n");
	fflush(stdin);
	gets(s[i].stu_ID);
	for(j=0;j<id;j++){
		if(i==j)
			continue;
		else{
			if((strcmp(s[i].stu_ID,s[j].stu_ID))==0){
				printf("Student ID exists, please enter data for another student.\n");
				goto id;}
		}
	}
	printf("Enter Student Name.\n");
	fflush(stdin);
	gets(s[i].stu_name);
	s[i].GPA=accumulateEvaluations(s,i);
}
choice:
	system("cls");
printf( "g.For printing GPA of a given student ID.\n"
		"a.For printing GPA of all students in a tabular form.\n"
		"r.For replacing the details of the student at the 7th index by your exact data.\n"
		"f.For finding the details of a student\n"
		"s.For printing the statistics of the class.\n"
		"e.Exit the program\n");
		fflush(stdin);
		scanf("%c",&choice);
	
switch(choice){
	case 'g':
		system("cls");
		printf("Enter the ID of the Student.\n");
		fflush(stdin);
		gets(ID);
		for(i=0;i<id;i++){
			if((strcmp(s[i].stu_ID,ID))==0){
				printf("\nID\tName\tGPA");
				printf("\n%s\t%s\t%.2f",s[i].stu_ID,s[i].stu_name,s[i].GPA);
			}
		}
		printf("\n\nPress 0 to back.\n");
		fflush(stdin);
		scanf("%d",&j);
		if(j==0)
			goto choice;
		break;
		break;
	case 'a':
		system("cls");
		for(i=0;i<id;i++){
			printf("\nID\tName\tGPA");
			printf("\n%s\t%s\t%.2f",s[i].stu_ID,s[i].stu_name,s[i].GPA);
			}
		printf("\n\nPress 0 to back.\n");
		fflush(stdin);
		scanf("%d",&j);
		if(j==0)
			goto choice;
		break;
	case 'r':
		system("cls");
		printf("Enter the Index Number you want to update.\n");
		fflush(stdin);
		scanf("%d",&i);
		printf("Enter Student ID.\n");
		fflush(stdin);
		gets(s[i].stu_ID);
		printf("Enter Student Name.\n");
		fflush(stdin);
		gets(s[i].stu_name);
		s[i].GPA=accumulateEvaluations(s,i);
		printf("\n\nPress 0 to back.\n");
		fflush(stdin);
		scanf("%d",&j);
		if(j==0)
			goto choice;
		break;
	case 'f':
		system("cls");
		smartFind(s,id);
		printf("\n\nPress 0 to back.\n");
		fflush(stdin);
		scanf("%d",&j);
		if(j==0)
			goto choice;
		break;
	case 's':
		system("cls");
		for(i=0;i<id;i++){
			avm1+=s[i].mid1;
			avm2+=s[i].mid2;
			avmf+=s[i].final;
			avmt+=(s[i].mid1)+(s[i].mid2)+(s[i].final)+(s[i].assignment)+(s[i].quiz);
			max1=(s[i].mid1)+(s[i].mid2)+(s[i].final)+(s[i].assignment)+(s[i].quiz);
			if(max<max1)
				max=max1;
		}
		printf("Total Student count is %d.\n",id);
		printf("Average score mid1 is %.2f.\n",avm1/id);
		printf("Average score mid 2 is %.2f.\n",avm2/id);
		printf("Average score final is %.2f.\n",avmf/id);
		printf("Average Total score is %.2f.\n",avmt/id);
		for(i=0;i<id;i++){
			if(max==((s[i].mid1)+(s[i].mid2)+(s[i].final)+(s[i].assignment)+(s[i].quiz)))
				printf("Student ID %s has the maximum score of %.2f.\n",s[i].stu_ID,max);
		}
		for(i=0;i<id;i++){
			if(i==0)
				printf("List of student ID is given below who didn't pass the course.\n");
		else if(s[i].GPA<2)
			printf("%s\n",s[i].stu_ID);
		}
		printf("Thank you, My ID is 22k-4090 and my name is Muhammad Talha.\n");
		printf("\n\nPress 0 to back.\n");
		fflush(stdin);
		scanf("%d",&j);
		if(j==0)
			goto choice;
		break;
	case 'e':
		break;
	default:
		system("cls");
		printf("Invalid Operation.\nERROR!!");
		sleep(5);
		printf("\n\nPress 0 to back.\n");
		fflush(stdin);
		scanf("%d",&j);
		if(j==0)
			goto choice;
		break;
}
}
void smartFind(struct student s[],int id){
	int i;
	char search[30];
	printf("Enter the Student ID or Student Name\n");
	fflush(stdin);
	gets(search);
	for(i=0;i<id;i++){
		if((strcmp(s[i].stu_ID,search))==0||(strcmp(s[i].stu_name,search))==0){
				printf("Student ID: %s\n",s[i].stu_ID);
				printf("Student Name: %s\n",s[i].stu_name);
				printf("Mid 1: %.2f\n",s[i].mid1);
				printf("Mid 2: %.2f\n",s[i].mid2);
				printf("Final: %.2f\n",s[i].final);
				printf("Assignment: %.2f\n",s[i].assignment);
				printf("Quiz: %.2f\n",s[i].quiz);
				printf("GPA : %.2f\n",s[i].GPA);	
		}
	}	
}
float getGPA(float sum){
	float GPA;
	if(sum<=50)
		GPA=1;
	else
		GPA=1+(sum-50)/12;
	if(GPA>=4)
		GPA=4;
		
	return GPA;
	} 
float  accumulateEvaluations(struct student s[],int i){
	float percentage,sum;
	printf("Enter Mid 1 Score (out of 15):\n");
	fflush(stdin);
	scanf("%f",&s[i].mid1);
	printf("Enter Mid 2 Score (out of 15):\n");
	fflush(stdin);
	scanf("%f",&s[i].mid2);
	printf("Enter Final Score (out of 50):\n");
	fflush(stdin);
	scanf("%f",&s[i].final);
	printf("Enter Assignment Score (out of 10):\n");
	fflush(stdin);
	scanf("%f",&s[i].assignment);
	printf("Enter Quiz Score (out of 10):\n");
	fflush(stdin);
	scanf("%f",&s[i].quiz);
	sum=(s[i].mid1)+(s[i].mid2)+(s[i].final)+(s[i].assignment)+(s[i].quiz);
	return getGPA(sum);	
	
}
