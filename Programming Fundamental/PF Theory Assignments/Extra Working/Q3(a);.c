#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct data
{ 
    int stu_id;
    char name[30];
    float mid1;
    float mid2;
    float assignment;
    float quiz;
    float final;
};
float getGPA(float mid1,float mid2,float assignment, float quiz, float final)
{
	float total,GPA;
	total=mid1+mid2+assignment+quiz+final;
	GPA=(total/100)*4;
	return GPA;
}
float accumulateEvaluation(float mid1,float mid2,float assignment,float quiz,float final) 
{
	float result;
	result = getGPA(mid1,mid2,assignment,quiz,final);
} 
                                                                                  
int main()
{
	printf("*****************************\n");
	printf("Name: Hafiz Muhammad Abdullah");
	printf("\nRoll no.: 22k-4489\n");
	printf("*****************************");	
	int id;
	char ch;

	char option;
	int index;
	float mid1,mid2,assignment,quiz,final;
	char name[30];
	struct data std[10];
	printf("\nFor this There Will be only 10 Students: \n");
	printf("\nStudents Information: \n");
	jump:
	for (int i=0;i<10;i++)
	{
		printf("Student %d ID: 22k-",i+1);
		scanf("%d",&std[i].stu_id);
		for (int s=0;s>i;s++)
		{
			if(std[s].stu_id==std[i].stu_id)
			{
				printf("\nStudent ID already exists, please enter data for another student.\n");
				goto jump;
			}
		}
		printf("Student %d name: ",i+1);
		scanf(" %s",std[i].name);
		printf("Student %d mid1 score 15/",i+1);
		scanf("%f",&std[i].mid1);
		printf("Student %d mid2 score 15/",i+1);
		scanf("%f",&std[i].mid2);
		printf("Student %d assignment score 10/",i+1);
		scanf("%f",&std[i].assignment);
		printf("Student %d quiz score 10/",i+1);
		scanf("%f",&std[i].quiz);
		printf("Student %d final score 50/",i+1);
		scanf("%f",&std[i].final);			
	}
	do
	{
		printf("\n\t\t***Menu***");
	    printf("\n\t\tg.Calculate GPA");
	    printf("\n\t\ta.GPA of all students");
	    printf("\n\t\tr.Replacing data");
	    printf("\n\t\tf.Search student details");
	    printf("\n\t\ts.Show statistics");
	    printf("\n\t\te.Exit");
	    printf("\nEnter option:\n");
	    scanf("\n%c",&option);
		switch(option)
		{
			case 'g':
				{
					printf("\nInput Student NU-ID to find: 22k-");
					scanf("%d",&id);
					for (int i=0;i<10;i++)
					{
						if(id==std[i].stu_id)
						{
							printf("\nStudent NU-ID: 22k-%d", std[i].stu_id);                                                         
							printf("\nStudent name: %s", std[i].name);                                                                 
							printf("\nGPA: %.2f", accumulateEvaluation(std[i].mid1,std[i].mid2,std[i].assignment,std[i].quiz, std[i].final));
						}
					} 
				}
				break;
			case 'a':
			    {
			    	printf("\n\tNU-ID\t\tName\t\t\tGPA");
			    	for (int i=0;i<10;i++)
			    	{
			    		printf("\n\t22k-%d\t%s\t\t%.2f", std[i].stu_id,std[i].name,accumulateEvaluation(std[i].mid1,std[i].mid2,std[i].assignment,std[i].quiz, std[i].final));
					}
				}
				break;
			case 'r':
				{
					printf("ID: 22k-");
					scanf("%d", &id);  
					printf("\nEnter new data:");
					printf("Name: ");         
					scanf("%s",name);                      
					printf("Mid 1: ");        
					scanf("%f", &mid1);           
					printf("Mid 2: ");        
					scanf("%f", &mid2);           
					printf("Assignment: ");       
					scanf("%f", &assignment);            
					printf("Quiz: ");  
					scanf("%f", &quiz);           
					printf("Final: ");      
					scanf("%f", &final);
					printf("Input index Number to which you want to replace: ");            
					scanf("%d", &index);
					std[index-1].stu_id=id;
					for (int i=0;i<10;i++)
					{
						std[index-1].name[i]=name[i];	
					}
					std[index-1].mid1=mid1;
					std[index-1].mid2=mid2;
					std[index-1].assignment=assignment;
					std[index-1].quiz=quiz;
					std[index-1].final=final;
					printf("\n\tNU-ID\t\tName\t\tGPA");
					for (int i=0;i<10;i++)
					{
						printf("\n\t22k-%d\t%s\t\t%.2f", std[i].stu_id,std[i].name,accumulateEvaluation(std[i].mid1,std[i].mid2,std[i].assignment,std[i].quiz, std[i].final));
					}
				}
				break;
			case 'f':
			    {
      	            
			    }
				break;	
			case 's':
			    {
			    	float av1,av2,av3,avf;
			    	for (int i=0;i<10;i++)
			    	{
			    		av1+std[i].mid1;
			    		av2+std[i].mid2;
			    		av3+std[i].final;
			    		avf+std[i].mid1+std[i].mid2+std[i].assignment+std[i].quiz+std[i].final;
			    		
					}
					av1=av1/10;
					av2=av2/10;
					av3=av3/10;
					avf=avf/10;
					printf("\nAverage score mid1: %.2f", av1); 
					printf("\nAverage score mid2: %.2f", av2); 
					printf("\nAverage score final: %.2f", av3);
					printf("\nAverage total score: %.2f", avf);
					for (int i=0;i<10;i++)
					{
						int totalscore;                                                               
						totalscore=std[i].mid1+std[i].mid2+std[i].assignment+std[i].quiz+std[i].final;
						if(totalscore<50)
						{
								printf("\n\n22k-%d %s didn't pass the course with %d marks.",std[i].stu_id,std[i].name,totalscore);
						}
					}
					printf("\nThankYou, My ID is 22k-4489 and my name is Hafiz Muhammad Abdullah.");	
				}
				break;
			case 'e':
				{
					exit(0);
				}		
		}
		printf("\nWant to Continue? (y/n)\n");
    	scanf("\n%c",&ch);
	}
	while (ch!='n');
}











































