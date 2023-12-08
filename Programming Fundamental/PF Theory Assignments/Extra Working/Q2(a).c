#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
	char a[50];
	int i=0,j=0,k=0,b=0,m=0;
	int space[10];
	printf("Enter String: ");
	fgets(a,sizeof(a),stdin);
	int d=strlen(a);
	for (i=0;i<d-1;i++)
	{
		if(a[i]==' ')
		{
			j++;
			space[j]=i;
		}
	}
	printf("%d",j);
	
	
		if((a[0]!='a')&&(a[0]!='e')&&(a[0]!='i')&&(a[0]!='o')&&(a[0]!='u'))
	    {
		    a[space[1]-2]=a[space[1]-2]-32;
		    printf(" %c%c",a[space[1]-2],a[space[1]-1]);
	        for (k=0;k<d-1;k++)
	        {
		        if(a[k]==a[space[1]-2])
		        {
			        break;
		        }
		        a[0]=a[0]+32;
		        printf("%c",a[k]);
	        }
	        printf("ay");
        }
    printf("%d",space[1]);   
	for (m=1;m<j;m++)
	{			
	   for (i=space[m];i<=space[m];i++)
	    {
		   if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u'))
		   {
			    printf(" %c%c",a[(space[m]+1)-2],a[(space[m]+1)-1]);
			    for (k=space[m]+1;k<d;k++)
			    {
			    	if(a[k]==a[space[k]-2])
			    	{
			    		//printf("ay");
			    		break;
					}
					printf("%c",a[k]);
			    }

		    }
		    
	    }
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
}