#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    int array[5][6];
    int i,j,k;
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
				array[i][j]=(rand()%(90-65))+65;
				printf(" %c ",array[i][j]);	
			}
		}
		else
		{
	        for (j=0;j<6;j++)                   
		    {                                     
		        array[i][j]=(rand()%(90-65))+65;
                
                printf(" %c ",array[i][j]);		
		    }                                     
            printf("\n");			
		}                 
    }
    int score=0,count=0,a,b,count1=0,score1=0,lastscore=0,e=0,f=0;
    char string[20];
    char list[20];
    char parallel[20];
    int press=1;
    //while (press==1)
    //{   	
    	printf("\nEnter String to Find:");
        scanf("%s",string);
	    int d=strlen(string); 
	    for (i=0;i<5;i++)
	    {
	    	for (j=0;j<6;j++)
	    	{
	    		if (string[0]==array[i][j])
	    		{
	    			e=i;
	    			f=j;
		    		count++;
	    			printf("%d %d",e,f);
	    			break;    			
				}
			}
			if(count==1)
			{
				parallel[0]=array[e][f];
				break;
				
			}
		}
		for (i=f+1,j=1;i<6,j<d;i++,j++)
		{
			if(string[j]==array[e][i])
			{
				parallel[j]=array[e][j];
				count++;
			}
		}
		for (i=0;i<d;i++)
		{
			printf("%c",parallel[i]);
		}
	    /*for (i=0;i<5;i++)
        {
    	    for (j=0;j<6;j++)
    	    {
    	        if (string[0]==array[i][j])
    	        {
    	            score++;
    	            a=i;
    	            b=j;
    	            break;
		        }
		    }
		    if(score==1)
		    {
			    list[0]=array[a][b];
				break; 
		    }	
        }
	    for (i=a+1,j=1;i<5,j<d;i++,j++)
	    {
	        if (string[j]==array[i][b])
	        {
	        	list[j]=array[j][b];
	            score++;
		    }
	    }*/
	    if(count==d)
        {

		    lastscore++;
		    printf("\n%s is Present and score is %d",string,lastscore);
	    }
	    else if(score==d)
        {
		    lastscore++;
		    printf("\n%s is Present and Score is %d",string,lastscore);
	    }
	    else if (score!=d)
	    {
		    lastscore--;
		     printf("%s is not present and Score is %d",string,lastscore);
	    } 
	    else if (count!=d)
	    {
		    lastscore--;
		    printf("%s is not present and score is %d",string,lastscore);
	    } 	        
	    //printf("\nDo you want to continue your Search If yes press 1");
	    //scanf("%d",&press);
	    //press++;
	    

    //}




}



























