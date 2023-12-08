#include<stdio.h>

void s(int i,int prev,int seed)
{
	
	int current;
	if(i<7)
	{
		current=seed+prev;
		printf("%d",current);
		prev=seed;
		seed=current;
		
	}
	s(i+1,prev,seed);
	
}
int main()
{
	int seed=1;
	int prev=0;
	int i=1;
	printf("%d",seed);
}
