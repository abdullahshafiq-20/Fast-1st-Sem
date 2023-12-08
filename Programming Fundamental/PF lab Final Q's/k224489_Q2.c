#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
	int top;
	char name[10];	
}s[10];
int main()
{
	int i,j;
	int n,new_ele;
	char option;
	int option1;
	printf("Enter No. of Elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\nenter element %d: ",i+1);
		scanf("%s",s[i].name);
		printf("\n%s",s[i].name);
	}
	printf("\nYou want to add more: ");
	scanf("\n%c",&option);
	if(option=='y')
	{
		printf("Enter How many Elements you want to add: ");
		scanf("%d",&new_ele);
		for (i=n;i<new_ele+n;i++)
		{
			printf("\nenter element %d: ",i+1);
			scanf("%s",s[i].name);
		}
	}
	printf("Enter Option:\n1.push\n2.pop.\n3.Isempty\n4.Iocate\n5.Display\n6.exit");
	scanf("%d",&option1);
	
	switch(option1)
	{
		case 1:
			{
				int *p=(int*)realloc(0,sizeof(char));
				scanf("%s",s[*p].name);
				for (i=0;i<new_ele+n;i++)
				{
					printf("%s",s[i].name);	
				}	
			}
			break;
		case 2:
		    {
		    	s[0].name==s[1].name;
		    	for (i=1;i<new_ele+n;i++)
		    	{
		    		printf(" %s",s[i].name);
				}
				break;
			}
		case 5:
		   {
		       for(i=0;i<new_ele+n;i++)
	           {
		            printf("%s",s[i].name);
	            }			
		   }
		   break;		
	}



	
	
	
}
	
	
	
	
