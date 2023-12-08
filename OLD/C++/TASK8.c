#include <stdio.h>
int main()
{
	char school,department,course;
	printf("\nSchool of Computer Science(C)\nSchool of Business(B)\nSchool of Engineering(E)\n");
	printf("\nSelect from above:\n");
	scanf("\n%c",&school);
	if (school=='C')
	{
		printf("\nSchool of Computer Science:\n");
		printf("Department of Informatics(I)\nDepartment of Machine Learning(M)\n");
		scanf("\n%c",&department);
		if(department=='I')
		{
			printf("\nSchool of Computer Science");
			printf("\nDepartment of Informatics");
			printf("\nSelect Course:\nCourse A\nCourse B\nCourse C\nCourse D\n");
			scanf("\n%c",&course);
			if(course=='A')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Informatics\n\t\t\tCourse A");
			if(course=='B')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Informatics\n\t\t\tCourse B");
			if(course=='C')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Informatics\n\t\t\tCourse C");
			if(course=='D')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Informatics\n\t\t\tCourse D");	
		}
		else if(department=='M')
		{
			printf("\nSchool of Computer Science");
			printf("\nDepartment of Machine Learning");
			printf("\nSelect Course:\nCourse E\nCourse F\nCourse G\nCourse H\nCourse I\n");
			scanf("\n%c",&course);
			if(course=='E')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Machine Learning\n\t\t\tCourse E");
			if(course=='F')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Machine Learning\n\t\t\tCourse F");
			if(course=='G')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Machine Learning\n\t\t\tCourse G");
			if(course=='H')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Machine Learning\n\t\t\tCourse H");
			if(course=='I')
			printf("you have Selected:\n\tSchool of Computer Science\n\t\tDepartment of Machine Learning\n\t\t\tCourse I");
			
		}
		
	}
	else if (school=='B')
	{
		printf("\nSchool of Business:\n");
		printf("Department of Commerce(C)\nDepartment of purchasing(P)\n");
		scanf("\n%c",&department);
		if(department=='C')
		{
			printf("\nSchool of Business");
			printf("\nDepartment of Commerce");
			printf("\nSelect Course:\nCourse X\nCourse Y\nCourse Z\n");
			scanf("\n%c",&course);
			if(course=='X')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of Commerce\n\t\t\tCourse X");
			if(course=='Y')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of Commerce\n\t\t\tCourse Y");
			if(course=='Z')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of Commerce\n\t\t\tCourse Z");	
		}
		else if(department=='P')
		{
			printf("\nSchool of Business");
			printf("\nDepartment of purchasing");
			printf("\nSelect Course:\nCourse M\nCourse N\nCourse O\nCourse P\n");
			scanf("\n%c",&course);
			if(course=='M')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of purchasing\n\t\t\tCourse M");
			if(course=='N')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of purchasing\n\t\t\tCourse N");
			if(course=='O')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of purchasing\n\t\t\tCourse O");	
            if(course=='P')
			printf("you have Selected:\n\tSchool of Business\n\t\tDepartment of purchasing\n\t\t\tCourse P");	
	
		}
	}
	else if(school=='E')
	{
		printf("\nSchool of Engineering:\n");
		printf("Department of Mechanical Engineering(M)\nDepartment of Mechatronics Engineering(T)\n");
		scanf("\n%c",&department);
		if(department=='M')
		{
			printf("\nSchool of Engineering");
			printf("\nDepartment of Mechanical Engineering");
			printf("\nSelect Course:\nCourse R\nCourse S\n");
			scanf("\n%c",&course);
			if(course=='R')
			printf("you have Selected:\n\tSchool of Engineering\n\t\tDepartment of Mechanical Engineering\n\t\t\tCourse A");
			if(course=='S')
			printf("you have Selected:\n\tSchool of Engineering\n\t\tDepartment of Mechanical Engineering\n\t\t\tCourse B");
		}
		else if(department=='T')
		{
			printf("\nSchool of Engineering");
			printf("\nDepartment of Mechatronics Engineering");
			printf("\nSelect Course:\nCourse J\nCourse K\nCourse L\n");
			scanf("\n%c",&course);
			if(course=='J')
			printf("you have Selected:\n\tSchool of Engineering\n\t\tDepartment of Mechatronics Engineering\n\t\t\tCourse J");
			if(course=='K')
			printf("you have Selected:\n\tSchool of Engineering\n\t\tDepartment of Mechatronics Engineering\n\t\t\tCourse K");
			if(course=='L')
			printf("you have Selected:\n\tSchool of Engineering\n\t\tDepartment of Mechatronics Engineering\n\t\t\tCourse L");
		}
			
	}
		
}






