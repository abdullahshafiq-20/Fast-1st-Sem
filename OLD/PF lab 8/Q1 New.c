#include<stdio.h>
int main()
{
	printf("Enter No. of Alphabets: ");
	int num,sumvovel=0,sumcon=0;
	scanf("%d",&num);
	char ch[num];
	char vovel[sumvovel];
	char con[sumcon];
	printf("Enter Alphabets: \n");
	for(int j=0;j<num;j++)
	{
		scanf("\n%c",&ch[j]);
	}
	for (int i=0;i<num;i++)
	{
		if ((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
	    {
	    	sumvovel=sumvovel+1;
	    	vovel[i]=ch[i];
	    		for(int t=0;t<1;t++)
	            {
		            printf("\nVovels Are: %c",vovel[i]);
            	}
	    }
	    else
	    {
	    	sumcon=sumcon+1;
			con[i]=ch[i];
				for(int k=0;k<1;k++)
	               {
		                printf("\nConsunant Are: %c",con[i]);
	               }	
		}
	}
	printf("\nYou Entered %d Vovel",sumvovel);
	printf("\nYou Enbtered %d Consunant",sumcon);

	

	
}