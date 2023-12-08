#include<stdio.h>
#include<stdlib.h>
int main()
{
	//All the Inputs are Here.                                                   
	int i,j=0,k,num,option;                                                      
	//printf("What do you Want to perform:\n1.Differentiation\n2.Integeration\n"); 
	//scanf("%d",&option);                                                         
	printf("Enter Terms:");                                                      
	scanf("%d",&num);                                                            
	float ans[num];                                                              
	float cof[num];                                                              
	float power[num];                                                            
	char sign[num];                                                              
	for (i=0;i<num;i++)             
	{                               
		printf("Sign:");            
		scanf("\n%c",&sign[i]);     
		printf("Co-officient:");    
		scanf("%f",&cof[i]);	    
		//printf("\n%.1fx^",cof[i]))
		printf("Power:");           
		scanf("%f",&power[i]);      
		//printf("%.1f",power[i]);  
		ans[i]=cof[i]*power[i];     
	}                               
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}