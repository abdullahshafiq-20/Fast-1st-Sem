#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct data{
	int student_id;
	char name[10];
	float mid1;
	float mid2;
	float final;
	float assignment;
	float quiz;
};
float getGPA(float mi1,float mi2,float fi, float as, float qu){
	float total=mi1+mi2+fi+as+qu;
	float gpa=(total/100)*4;
	return gpa;
}
float accevaluations(float m1,float m2,float f, float a, float q){
	float result=getGPA(m1,m2,f, a, q);
}



int main()
{
	printf("Name: Asghar Ali");
	printf("\nRoll no.: 22k-4415\n");
	int opt;
	int id,ns=10;
	char ch;
	int ind;
	float m1,m2,f,as,q;
	char name[10],option[6];
	printf("\n\nNo. of students: %d", 1);
	struct data std[ns];
	printf("\nInput student's information: \n");
	
	for(int i=0,j=1;i<1;i++,j++){
		jump:
		printf("Student %d id: 22k-",j);
		scanf("%d",&std[i].student_id);
		
		
		for(int m=0;m<i;m++)
		{
				if(std[m].student_id==std[i].student_id)
			{
				goto jump;
			}
			
		}
		
		printf("\nStudent %d name: ",j);
		scanf(" %s",std[i].name);
		printf("\nStudent %d mid1 score:(out of 15) ",j);
		scanf("%f", &std[i].mid1);
		printf("\nStudent %d mid2 score:(out of 15) ",j);
		scanf("%f", &std[i].mid2);
		printf("\nStudent %d final score:(out of 50) ",j);
		scanf("%f", &std[i].final);
		printf("\nStudent %d assignment score:(out of 10) ",j);
		scanf("%f", &std[i].assignment);
		printf("\nStudent %d quiz score:(out of 10) ",j);
		scanf("%f", &std[i].quiz);
	}
	do{
	
	printf("\n\t\tMenu");
	printf("\n\t1.Calculate GPA");
	printf("\n\t2.GPA of all students");
	printf("\n\t3.Replacing data");
	printf("\n\t4.Search student details");
	printf("\n\t5.Show statistics");
	printf("\n\t6.Exit");
	printf("\nEnter option: ");
	scanf("%d", &opt);
	
	switch(opt)
	{
		case 1:
			{
				printf("\nEnter student id: 22k-");
				scanf("%d", &id);
				for(int i=0;i<ns;i++)
				{
					if(id==std[i].student_id)
					{
						printf("\nStudent ID: 22k-%d", std[i].student_id);
						printf("\nStudent name: %s", std[i].name);
						printf("\nGPA: %.2f", accevaluations(std[i].mid1,std[i].mid2,std[i].final,std[i].assignment, std[i].quiz));
					}
				}
			}break;
			
		case 2:
			{
				printf("\n\tID\t\tName\t\tGPA");
				for(int i=0;i<ns;i++)
				{
					printf("\n\t22k-%d\t%s\t\t%.2f", std[i].student_id,std[i].name,accevaluations(std[i].mid1,std[i].mid2,std[i].final,std[i].assignment, std[i].quiz));
				}
				
			}break;
			
		case 3:
			{
				printf("\nEnter new data:");
				printf("\nName: ");
				scanf("%s",name);
				printf("\nID: 22k-");
				scanf("%d", &id);
				printf("\nMid 1: ");
				scanf("%f", &m1);
				printf("\nMid 2: ");
				scanf("%f", &m2);
				printf("\nFinals: ");
				scanf("%f", &f);
				printf("\nAssignments: ");
				scanf("%f", &as);
				printf("\nQuizzes: ");
				scanf("%f", &q);
				
				printf("Which index data you want to replace: ");
				scanf("%d", &ind);
			
					std[ind-1].student_id=id;
				for(int i=0;i<10;i++)
				{
					std[ind-1].name[i]=name[i];
				}
				std[ind-1].mid1=m1;
				std[ind-1].mid2=m2;
				std[ind-1].assignment=as;
				std[ind-1].final=f;
				std[ind-1].quiz=q;
				
				printf("\n\tID\t\tName\t\tGPA");
				for(int i=0;i<ns;i++)
				{
					printf("\n\t22k-%d\t%s\t\t%.2f", std[i].student_id,std[i].name,accevaluations(std[i].mid1,std[i].mid2,std[i].final,std[i].assignment, std[i].quiz));
				}
			}break;
			
		case 4:
			{
				return 0;
			}break;
			
		case 5:
			{
				float avg1,avg2,avg3,avg4;
				printf("\nTotal students: %d",2);
				for(int i=0;i<ns;i++)
				{
					avg1=avg1+std[i].mid1;
					avg2=avg2+std[i].mid2;
					avg3=avg3+std[i].final;
					avg4=avg4+std[i].assignment+std[i].final+std[i].mid1+std[i].mid2+std[i].quiz;
				}
				avg1=avg1/2;
				avg2=avg2/2;
				avg3=avg3/2;
				avg4=avg4/2;
				printf("\nAverage score mid1: %.2f", avg1);
				printf("\nAverage score mid2: %.2f", avg2);
				printf("\nAverage score final: %.2f", avg3);
				printf("\nAverage total score: %.2f", avg4);
				for(int i=0;i<ns;i++)
				{
					int tscore=std[i].assignment+std[i].final+std[i].mid1+std[i].mid2+std[i].quiz;
					if(tscore<50)
					{
						printf("\n\n%s 22k-%d didn't pass the course with %d marks.", std[i].name,std[i].student_id, tscore);
					}
				}
			}break;
		case 6:
			{
				return 0;
			}break;
			default: 
			{
				printf("\nInvalid option");
			}
		
	}
	printf("\ndo you want to continue? (y-yes, n-no) ");
	scanf(" %c", &ch);
}while(ch!='n');
	
	return 0;
}