#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    int array[5][6];
    int i,j,k=0;
    int random;
    int id[4]={4,4,8,9};
    for (i=0;i<5;i++)
	{
		if(i==4)
		{
			for (j=0;j<4;j++)
			{
				printf(" %d ",id[j]);
			}
			for (j=0;j<2;j++)
			{
				array[i][j]=(rand()%26)+65;
				printf(" %c ",array[i][j]);	
			}
		}
		else
		{
	        for (j=0;j<6;j++)                   
		    {                                     
		        array[i][j]=(rand()%26)+65;
                
                printf(" %c ",array[i][j]);		
		    }                                     
            printf("\n");			
		}                 
    }
    char string[20];
    printf("\nEnter String to Find:");
    scanf("%s",string);
	int d=strlen(string);
	int a=0,b=0;
	int count=0;
	char parallel[20];
	char perpendicular[20];
	do
	{
		for (i=0;i<5;i++)
		{
			for (j=0;j<6;j++)
			{
				if(string[0]==array[i][j]&&string[1]==array[i][j+1])
				{
					a=i;
					b=j+1;
					parallel[0]=array[i][j];
					parallel[1]=array[i][j+1];
					for (i=2,j=b+1;i<d,j<d;i++,j++)
		            {
			            parallel[i]=array[a][j];
			            if(parallel=='\0')
			            {
			            	break;
						}
		            }
					break;
				}
			}
			if(strcmp(string,parallel)==0)
			{
				break;
			}
		}
		for (i=0;i<5;i++)
		{
			for (j=0;j<6;j++)
			{
				if(string[0]==array[i][j]&&string[1]==array[i+1][j])
				{
					a=i+1;
					b=j;
					perpendicular[0]=array[i][j];
					perpendicular[1]=array[i+1][j];
					for (i=2,j=a+1;i<d,j<d;i++,j++)
		            {
			            perpendicular[i]=array[j][b];
			            if(perpendicular=='\0')
			            {
			            	break;
						}
		            }
					break;
				}
			}
			if(strcmp(string,perpendicular)==0)
			{
				break;
			}
		}
		if(strcmp(string,perpendicular)==0||strcmp(string,parallel)==0)
		{
			count++;
			printf("\n%s -->Present & Score--> %d",string,count);
		}
		else 
		{
			count--;
			printf("\n%s --> is not Present & Score--> %d",string,count);			
		}
        printf("\nEnter String to Find:");
        scanf("%s",string);
	    int d=strlen(string);
		if(string[0]=='E'&&string[1]=='N'&&string[2]=='D')
		{
			exit(0);
		}				
	}
	while(string!="END");
}













