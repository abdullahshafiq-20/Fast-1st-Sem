#include<stdio.h>
int main(int argc, char** argv) {
	char a[25]={"AGCTTACATATTACGAGTTG"};
	char temp;
	int count=0 ;
	for (int i=0; i<4; i++)
	{
		temp=a[i];
		printf("%c:",temp);
		for (int j=i+1; j<21; j++)
		{ 
					if (a[j]==temp)
			{
				count=count+1;
			}
			
		}
		for (int y=0; y<=count; y++)
		{
			printf("*");
		}
		printf("\n");
		count=0;
	}
	return 0;
}

