#include<stdio.h>
#include<string.h>
struct details
{
	int b_no;
	char b_title[20];
	char author[20];
	char publisher[20];
	int cost;
};
int main()
{
	int n_b,i,j;
	printf("Enter Number of Books:");
	scanf("%d",&n_b);
	struct details a[n_b];
	for (i=0;i<n_b;i++)
	{
		printf("Enter Book No:");
		scanf(" %d",&a[i].b_no);
		printf("Enter Book Title:");
		scanf(" %s",a[i].b_title);		
		printf("Enter Book Author:");
		scanf(" %s",a[i].author);
		printf("Enter Book Publisher:");
		scanf(" %s",a[i].publisher);
		printf("Enter Book Cost:");
		scanf(" %d",&a[i].cost);						
	}

	printf("\nMenu:");
	printf("\n1.Book Author:");
	printf("\n2. Book Publisher:");
	printf("\n3.Book Cost :");
	printf("\n4.All Books:");
	int option;
	char author[20];
	char publisher[20];
	printf("\nEnter option:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
				printf("Enter Author You want to Search:");
				scanf("%s",author);
				for (i=0;i<n_b;i++)
				{
					if (strcmp(author,a[i].author)==0)
					{
						printf("\n%d.",a[i].b_no);
		                printf("%s",a[i].b_title);
		                printf("\nAuthor:%s",a[i].author);
		                printf("\nPublisher:%s",a[i].publisher);
		                printf("\nCost:%d",a[i].cost);		
					}
				}
			}
			break;
		case 2:
		    {
		    	printf("Enter Author You want to Search:");
		    	scanf("%s",publisher);
		    	for (i=0;i<n_b;i++)
		    	{
		    	    if(strcmp(publisher,a[i].publisher)==0)
		    	    {
					    printf("\n%d.",a[i].b_no);
		                printf("%s",a[i].b_title);
		                printf("\nAuthor:%s",a[i].author);
		                printf("\nPublisher:%s",a[i].publisher);
		                printf("\nCost:%d",a[i].cost);		    			
				    }		    		
				}	
			}
			break;
		case 3:
			{
				for (i=0;i<n_b;i++)
				{
					if(a[i].cost>500)
					{
					    printf("\n%d.",a[i].b_no);
		                printf("%s",a[i].b_title);
		                printf("\nAuthor:%s",a[i].author);
		                printf("\nPublisher:%s",a[i].publisher);
		                printf("\nCost:%d",a[i].cost);						
					}
				}
			}
			break;
		case 4:
			{
				for (i=0;i<n_b;i++)
				{
					printf("\n%d.",a[i].b_no);
		            printf("%s",a[i].b_title);
		            printf("\nAuthor:%s",a[i].author);
		            printf("\nPublisher:%s",a[i].publisher);
		            printf("\nCost:%d",a[i].cost);					
				}
			}	
	}
}









