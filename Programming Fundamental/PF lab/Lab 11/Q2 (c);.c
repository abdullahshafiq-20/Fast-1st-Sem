#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
	char a[50];
	int i=0,j=0,k=0,b=0,m=0,q=1;
	int s[10];
	printf("Enter String: ");
	fgets(a,sizeof(a),stdin);
	int d=strlen(a);
	for (i=0;i<d;i++)
	{
		if(a[i]==' ')
		{
			s[j]=i;
			j++;
		}
	}
	printf("22-k 4489 ");
		//Firt Word********************************************************
		if(a[0]=='s'&&a[1]=='c'&&a[2]=='h')
		{
			for (j=3;j<s[0];j++)
			{
				printf(" %c",a[j]);
			}
			printf("skay");
		}
		else if(a[0]=='y')
		{
			printf(" %c%c%c",a[s[0]-3],a[s[0]-2],a[s[0]-1]);
			for (j=0;j<s[0]-3;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");			
		}
		else if((a[0]!='a')&&(a[0]!='e')&&(a[0]!='i')&&(a[0]!='o')&&(a[0]!='u'))
		{
			a[0]=a[0]+32;
			a[s[0]-2]=a[s[0]-2]-32;
			
			printf(" %c%c",a[s[0]-2],a[s[0]-1]);
			for (j=0;j<s[0]-2;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");
		}
	    else if ((a[0]=='a')||(a[0]=='e')||(a[0]=='i')||(a[0]=='o')||(a[0]=='u'))
		{
			for (j=0;j<s[0];j++)
			{
				printf("%c",a[j]);
			}
			printf("way");
		}
		//Second Word*********************************************
		if(a[s[0]+1]=='s'&&a[s[0]+2]=='c'&&a[s[0]+3]=='h')
		{
			for (j=s[0]+4;j<s[1];j++)
			{
				printf(" %c",a[j]);
			}
			printf("skay");
		}
		else if(a[s[0]]+1=='y')
		{
			printf(" %c%c%c",a[s[1]-3],a[s[1]-2],a[s[1]-1]);
			for (j=s[0]+1;j<s[1]-3;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");			
		} 
		else if((a[s[0]+1]!='a')&&(a[s[0]+1]!='e')&&(a[s[0]+1]!='i')&&(a[s[0]+1]!='o')&&(a[s[0]+1]!='u'))
		{
			printf(" %c%c",a[s[1]-2],a[s[1]-1]);
			for (j=s[0]+1;j<s[1]-2;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");
		}
	    else if ((a[s[0]+1]=='a')||(a[s[0]+1]=='e')||(a[s[0]+1]=='i')||(a[s[0]+1]=='o')||(a[s[0]+1]=='u'))
		{
			for (j=s[0]+1;j<s[1];j++)
			{
				printf("%c",a[j]);
			}
			printf(" way");
		}
		//Third Word***************************************************
		if(a[s[1]+1]=='s'&&a[s[1]+2]=='c'&&a[s[1]+3]=='h')
		{
			for (j=s[1]+2;j<s[2];j++)
			{
				printf(" %c",a[j]);
			}
			printf("skay");
		}
		else if(a[s[1]+1]=='y')
		{
			printf(" %c%c%c",a[s[2]-3],a[s[2]-2],a[s[2]-1]);
			for (j=s[2]+1;j<s[3]-3;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");			
		}
		else if((a[s[1]+1]!='a')&&(a[s[1]+1]!='e')&&(a[s[1]+1]!='i')&&(a[s[1]+1]!='o')&&(a[s[1]+1]!='u'))
		{
			printf(" %c%c",a[s[2]-2],a[s[2]-1]);
			for (j=s[1]+1;j<s[2]-2;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");
		}
	    else if ((a[s[1]+1]=='a')||(a[s[1]+1]=='e')||(a[s[1]+1]=='i')||(a[s[1]+1]=='o')||(a[s[1]+1]=='u'))
		{
			for (j=s[1]+1;j<s[2];j++)
			{
				printf("%c",a[j]);
			}
			printf(" way");
		}
		//Forth word***************************************************************
		if(a[s[2]+1]=='s'&&a[s[2]+2]=='c'&&a[s[2]+3]=='h')
		{
			for (j=s[2]+3;j<s[3];j++)
			{
				printf(" %c",a[j]);
			}
			printf("skay");
		}
		else if(a[s[2]+1]=='y')
		{
			printf(" %c%c%c",a[s[3]-3],a[s[3]-2],a[s[3]-1]);
			for (j=s[2]+1;j<s[3]-3;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");			
		}
		else if((a[s[2]+1]!='a')&&(a[s[2]+1]!='e')&&(a[s[2]+1]!='i')&&(a[s[2]+1]!='o')&&(a[s[2]+1]!='u'))
		{
			printf(" %c%c",a[s[3]-2],a[s[3]-1]);
			for (j=s[2]+1;j<s[3]-2;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");
		}
	    else if ((a[s[2]+1]=='a')||(a[s[2]+1]=='e')||(a[s[2]+1]=='i')||(a[s[2]+1]=='o')||(a[s[2]+1]=='u'))
		{
			for (j=s[2]+1;j<s[3];j++)
			{
				printf(" %c",a[j]);
			}
			printf("way");
		}
		//fifth word*********************************************************
		if(a[s[3]+1]=='s'&&a[s[3]+2]=='c'&&a[s[3]+3]=='h')
		{
			for (j=s[3]+3;j<s[4];j++)
			{
				printf(" %c",a[j]);
			}
			printf("skay");
		}
		else if(a[s[3]+1]=='y')
		{
			printf(" %c%c%c",a[s[4]-3],a[s[4]-2],a[s[4]-1]);
			for (j=s[3]+1;j<s[4]-3;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");			
		}
		else if((a[s[3]+1]!='a')&&(a[s[3]+1]!='e')&&(a[s[3]+1]!='i')&&(a[s[3]+1]!='o')&&(a[s[3]+1]!='u'))
		{
			printf(" %c%c",a[s[4]-2],a[s[4]-1]);
			for (j=s[3]+1;j<s[4]-2;j++)
			{
				printf("%c",a[j]);
			}
			printf("ay");
		}
	    else if ((a[s[3]+1]=='a')||(a[s[3]+1]=='e')||(a[s[3]+1]=='i')||(a[s[3]+1]=='o')||(a[s[3]+1]=='u'))
		{
			for (j=s[3]+1;j<s[4];j++)
			{
				printf(" %c",a[j]);
			}
			printf("way");
		}		
}

















