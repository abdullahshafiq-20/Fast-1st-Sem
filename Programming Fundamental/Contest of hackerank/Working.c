#include<stdio.h>

int main()
{
	//All the Inputs are Here.
	int i,j=0,k,num,option;
	printf("What do you Want to perform:\n1.Differentiation\n2.Integeration\n");
	scanf("%d",&option);                                                                                                      
	printf("Enter Terms:");
	scanf("%d",&num);
	float ans[num];
	float cof[num];
	float power[num];
	char sign[num];
	//All the Calculation is being done here.
	switch(option)
	{
		case 1:
		{
			for (i=0;i<num;i++)                                                                              
			{                                                                                                
				printf("Sign:");                                                                             
				scanf("\n%c",&sign[i]);                                                                      
				printf("Co-officient:");                                                                     
				scanf("%f",&cof[i]);	                                                                     
				//printf("\n%.1fx^",cof[i]));                                                                
				printf("Power:");                                                                            
				scanf("%f",&power[i]);                                                                       
				//printf("%.1f",power[i]);                                                                   
				ans[i]=cof[i]*power[i];                                                                      
			}                                                                                                
			//All the printing processes are being done here.                                                
			printf("\nf(x) = ");                                                                              
			for (i=0;i<num;i++)//this loop is working for printing only f(x).                                
			{                                                                                                
				printf(" %c%.1fx^%.1f ",sign[i],cof[i],power[i]);                                             
			}
			printf("d(x)");                                                                                                
			printf("\nf'(x)= ");	                                                                         
			for (i=0;i<num;i++)//this loop is working fot printing f'(x).                                    
			{                                                                                                
				if (power[i]<0)                                                                              
				{                                                                                            
					if(sign[i]=='+')// for -ve power and +ve co-officient                                    
					{                                                                                        
						printf(" %.1fx^%.1f",ans[i],power[i]-1);                                             
					}                                                                                        
					else if (sign[i]=='-')// for -ve power and -ve co-officient                              
					{                                                                                        
						printf(" +%.1fx^%.1f",-1*ans[i],power[i]-1);                                         
					}                                                                                        
				}                                                                                            
				else if (power[i]==0)                                                                        
				{                                                                                            
					printf(" %c0",sign[i]);// if power=0 the term will become 0.                             
				}                                                                                            
				                                                                                             
				else if(power[i]<=1)                                                                         
				{                                                                                            
				    printf(" %c%.1f",sign[i],ans[i]);//if power=1 then there will be no subtraction in power.
				}                                                                                            
				else if(power[i]>1)                                                                          
				{                                                                                            
					printf(" %c%.1fx^%.1f",sign[i],ans[i],power[i]-1);                                       
				}
				                                                                                           	                                                                                             
			}
			printf(" +C"); 
			break;	
		}
		case 2:
		{
			for (i=0;i<num;i++)              
			{                                
				printf("Sign:");             
				scanf("\n%c",&sign[i]);      
				printf("Co-officient:");     
				scanf("%f",&cof[i]);	     
				//printf("\n%.1fx^",cof[i]));
				printf("Power:");            
				scanf("%f",&power[i]);       
				//printf("%.1f",power[i]);   
				ans[i]=cof[i]/(power[i]+1);      
			}
			//All the printing processes are being done here.                
			printf("\nf(x) = ");                                              
			for (i=0;i<num;i++)//this loop is working for printing only f(x).
			{                                                                
				printf(" %c%.1fx^%.1f",sign[i],cof[i],power[i]);             
			}
			printf("d(x)");                                                                
			printf("\nf'(x)= ");	                                                                         
			for (i=0;i<num;i++)//this loop is working fot printing f'(x).                                    
			{                                                                                                
				if (power[i]<0)                                                                              
				{                                                                                            
					if(sign[i]=='+')// for -ve power and +ve co-officient                                    
					{                                                                                        
						printf(" %.1fx^%.1f",ans[i],power[i]+1);                                             
					}                                                                                        
					else if (sign[i]=='-')// for -ve power and -ve co-officient                              
					{                                                                                        
						printf(" +%.1fx^%.1f",-1*ans[i],power[i]+1);                                         
					}                                                                                        
				}                                                                                                                                                                                                                                                                                                                                                                                
				else if(power[i]>=0)                                                                          
				{                                                                                            
					printf(" %c%.1fx^%.1f",sign[i],ans[i],power[i]+1);                                       
				}                                                                                            
			}
			printf(" +C"); 
	   }  
   }
}





