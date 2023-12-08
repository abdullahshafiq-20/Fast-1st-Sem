#include <stdio.h>
#include <string.h>



int main()
{
	
	char random[5][6],str[10],str2[7], str3[6];
	char end[3]={"END"};
	char roll[4]={"4415"};
	int r1,b=0,k=0,score=0;
	for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 6;j++)
        {
			r1 = (rand() % 26) + 65;
            random[i][j] = (char)r1;		
        }
    }
    for(int i=0;i<4;i++)
    {
    	random[4][i]=roll[i];
	}
    
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<6;j++)
    	{
    		printf("  %c  ", random[i][j]);
    		
		}
		printf("\n");
	}
	
	printf("\nSearch string: ");
	scanf("%s", str);
	int a=strlen(str);
	do
    {
    
    for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(str[0]==random[i][j] && str[1]==random[i][j+1])
			{
				while(a!=b)
				{
				str2[k]=random[i][j];
				b++;
				j++;
				k++;
				}
				str2[k]='\0';
			break;
			}
			
		}
	
		if(strcmp(str,str2)==0)
		break;
	k=0;
	b=0;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(str[0]==random[i][j] && str[1]==random[i+1][j])
			{
				while(a!=b)
				{
				str3[k]=random[i][j];
				b++;
				i++;
				k++;
				
				}
				str3[k]='\0';
			break;
			}
			
		}
		if(strcmp(str,str3)==0)
		{
		break;	
		}
		
	k=0;
	b=0;	
	}
		if(strcmp(str,str2)==0 || strcmp(str,str3)==0)
				{
			    printf("\n%s is present.",str);
			    score=score+1;
			    printf("\nScore = %d", score);
	            } 
				else 
            	{
                	printf("\n%s is not present.", str);
                	score=score-1;
                	printf("\nScore = %d", score);
            	}      
	printf("\nSearch string: ");
	scanf("%s", str);
	a=strlen(str);
	}while(strcmp(str,end)!=0);
	
	return 0;
}