#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter No of Studnet:");
	scanf("%d",&n);
	struct student
{
    char id[5];
    char name[30];
    char dept[10];
    int batch;
    char section;
    float cgpa;
}data[n];

    FILE *p;
    for (int i=0;i<n;i++)
    {
    	printf("Enter Student's id: ");
	    scanf("%s",&data[i].id);
	    printf("Enter student's name: ");
	    scanf("%s",&data[i].name);
	    printf("Enter student's department: ");
	    scanf("%s",&data[i].dept);
	    printf("Enter student's batch: ");
	    scanf("%d",&data[i].batch);
	    printf("Enter student's section: ");
	    scanf("%s",&data[i].section);
	    printf("Enter student's CGPA: ");
	    scanf("%f",&data[i].cgpa);
	}
	p=fopen("data.txt","a");
	for (int i=0;i<n;i++)
	{
		fprintf(p,"ID: %s\n",data[i].id);
		fprintf(p,"Name: %s\n",data[i].name);
		fprintf(p,"Department: %s\n",data[i].dept);
		fprintf(p,"Batch: %d\n",data[i].batch);
		fprintf(p,"Section: %c\n",data[i].section);
		fprintf(p,"CGPA: %f\n",data[i].cgpa);
		fprintf(p,"\n");
	}
	fclose(p);
	char roll[5];
	printf("Enter Roll No to Find:");
	scanf("%s",roll);
	p=fopen("data.txt","r");
	int j=0;
	char name2[100];
	for (int i=0;i<n;i++)
	{
		if (strcmp(roll,data[i].id)==0)
		{
			j=i;
		}
	}
	while(fgets(name2,1000,p))
   {
		printf("ID: %s\n",data[j].id);
		printf("Name: %s\n",data[j].name);
		printf("Department: %s\n",data[j].dept);
		printf("Batch: %d\n",data[j].batch);
		printf("Section: %c\n",data[j].section);
		printf("CGPA: %f\n",data[j].cgpa);
		printf("\n");
		break;	
	
	}

}







	


