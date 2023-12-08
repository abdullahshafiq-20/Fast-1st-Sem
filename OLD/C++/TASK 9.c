#include <stdio.h>
int main()
{
	int voteA1=0,voteB1=0,voteA2=0,voteB2=0,voteA3=0,voteB3=0,voteA4=0,voteB4=0,voteA5=0,voteB5=0,voteA6=0,voteB6=0,voteA7=0,voteB7=0;
	int D,i,district;
	printf("In which district you want to cast A vote:\n");
	scanf("%d",&district);
	switch (district)
	{
		case 1:	
			{
				printf("\t\t*****DISTRICT 1*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                 if (v=='A')
	                {
	    	            voteA1=voteA1+1;
		            }
		            else if (v=='B')
					{
	    	            voteB1=voteB1+1;
	    	        }
			    }
	    	    printf("\n\nTotal vote casted in D1: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA1,voteB1);			    
			    printf("\n\n\t***CASTING OF D1 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");
			    printf("In which district you want to cast A vote:\n");
	            scanf("%d",&district);
	        }
		case 2:
			{
				printf("\t\t*****DISTRICT 2*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                if (v=='A')
	                {
	    	            voteA2=voteA2+1;
	    	            printf("%d",voteA2);
		            }
		            else if (v=='B')
					{
	    	            voteB2=voteB2+1;
	    	            printf("Vote of candidate B : %d",voteB2);
	    	        }		            
			    }
	    	    printf("\n\nTotal vote casted in D2: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA2,voteB2);				    
			    printf("\n\n\t***CASTING OF D2 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");
			    printf("In which district you want to cast A vote:\n");
	            scanf("%d",&district);								
			}
		case 3:
			{
				printf("\t\t*****DISTRICT 3*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                if (v=='A')
	                {
	    	            voteA3=voteA3+1;
	    	            printf("%d",voteA3);
		            }
		            else if (v=='B')
					{
	    	            voteB3=voteB3+1;
	    	            printf("Vote of candidate B : %d",voteB3);
	    	        }		            
			    }
	    	    printf("\n\nTotal vote casted in D3: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA3,voteB3);				    
			    printf("\n\n\t***CASTING OF D3 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");
			    printf("In which district you want to cast A vote:\n");
	            scanf("%d",&district);				
			}
		case 4:
			{
				printf("\t\t*****DISTRICT 4*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                if (v=='A')
	                {
	    	            voteA4=voteA4+1;
	    	            printf("%d",voteA4);
		            }
		            else if (v=='B')
					{
	    	            voteB4=voteB4+1;
	    	            printf("Vote of candidate B : %d",voteB4);
	    	        }		            
			    }
			    printf("\n\nTotal vote casted in D4: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA4,voteB4);	
			    printf("\n\n\t***CASTING OF D4 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");
			    printf("In which district you want to cast A vote:\n");
	            scanf("%d",&district);				
			}
		case 5:
			{
				printf("\t\t*****DISTRICT 5*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                if (v=='A')
	                {
	    	            voteA5=voteA5+1;
	    	            printf("%d",voteA5);
		            }
		            else if (v=='B')
					{
	    	            voteB5=voteB5+1;
	    	            printf("Vote of candidate B : %d",voteB5);
	    	        }		            
			    }
	    	    printf("\n\nTotal vote casted in D5: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA5,voteB5);				    
			    printf("\n\n\t***CASTING OF D5 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");
			    printf("In which district you want to cast A vote:\n");
	            scanf("%d",&district);
			}
		case 6:
			{
				printf("\t\t*****DISTRICT 6*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                if (v=='A')
	                {
	    	            voteA6=voteA6+1;
	    	            printf("%d",voteA6);
		            }
		            else if (v=='B')
					{
	    	            voteB6=voteB6+1;
	    	            printf("Vote of candidate B : %d",voteB6);
	    	        }		            
			    }
			    printf("\n\nTotal vote casted in D6: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA6,voteB6);	
			    printf("\n\n\t***CASTING OF D6 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");
			    printf("In which district you want to cast A vote:\n");
	            scanf("%d",&district);				
			}
		case 7:
			{
				printf("\t\t*****DISTRICT 7*****\n");
				for (i=0;i<4;i++)
	            {
	                printf("\nOn Which candidate you want to cast vote:(A/B)\n");
	                char v;
	                scanf("\n%c",&v);
	                if (v=='A')
	                {
	    	            voteA7=voteA7+1;
	    	            printf("%d",voteA7);
		            }
		            else if (v=='B')
					{
	    	            voteB7=voteB7+1;
	    	            printf("Vote of candidate B : %d",voteB7);
	    	        }		            
			    }
			    printf("\n\nTotal vote casted in D7: 4\n");
	    	    printf("Candidate A : %d\ncandidate B : %d",voteA7,voteB7);	
			    printf("\n\n\t***CASTING OF D7 HAS BEEN ENDED***");
			    printf("\n\n\t-----------------------------------\n\n");	
			}		
	}
	int TVA=voteA1+voteA2+voteA3+voteA4+voteA5+voteA6+voteA7;
	int TVB=voteB1+voteB2+voteB3+voteB4+voteB5+voteB6+voteB7;
	printf("\nTotal Number of Votes of each candidate:\nCandidate A:%d\nCandidate B:%d",TVA,TVB);
	float tc=28.0,fTVA,fTVB;
	fTVA=TVA;
	fTVB=TVB;
	float pA,pB;
	printf("\nPrcentage Of Vote:\n");
	pA=(fTVA/tc)*100;
	printf("Candidate A:%.1f",pA);
	pB=(fTVB/tc)*100;
	printf("\nCandidate B:%.1f",pB);	
}






