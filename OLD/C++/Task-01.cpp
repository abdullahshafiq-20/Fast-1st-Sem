#include<iostream>
using namespace std;

class student
{
	private:
		int id;
		string name;
		int sem;
		
	
	public:
		
	student(){
		id=0;
		sem=0;
		name="NaN";
	}
	void initialize(int a, string b, int c)
	{
		a=id;
		b=name;
		c=sem;
	}
	void print()
	{
		cout<<"Students name id and semesters are: "<<endl;
		
	}
		
};
int main()
{
	int i,a,c;
	string b;
	student s1[5];
	
	
	cout<<"Enter the Details: "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Name of student is: ";
		cin>>s1.b;
		cout<<"\nID of student is: ";
		cin>>s1.a;
		cout<<"\nSemester of student is: ";
		cin>>s1.c;
	}
	
}

