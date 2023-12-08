#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data
{
	char gname[6];
	float lungcell;
	float skincell;
	float intcell;
	float livercell;
	float kidcell;
};
int main()
{
	struct data s[6];
    char CellExpData[5][6];
    char CellNameData[4][2];
    char mergedata[5][4];
    char cellname[10];
    FILE *p;
    p=fopen("data1.txt","w");
    fprintf(p,"G names---Lung cell----Skincell------Intcell------livercell------Kidneycell");
    for (int j=0;j<1;j++)
    {
    	printf("Enter Gene %d Nnames:",j);
    	scanf("%s",s[j].gname);
    	fprintf(p,"\n");
    	fprintf(p," %s",s[j].gname);
    	CellExpData[0][j]=s[j].gname;
    	
    	printf("Enter %d lung cell:",j);
    	scanf("%f",&s[j].lungcell);
    	fprintf(p," \t%.1f",s[j].lungcell);
    	
        printf("Enter %d skin cell:",j);
    	scanf("%f",&s[j].skincell);
    	fprintf(p," \t\t%.1f",s[j].skincell);
    	
    	printf("Enter %d int  cell:",j);
    	scanf("%f",&s[j].intcell);
    	fprintf(p," \t\t%.1f",s[j].intcell);
    	
    	printf("Enter %d liver cell:",j);
    	scanf("%f",&s[j].livercell);
    	fprintf(p," \t\t%.1f",s[j].livercell);
    	
    	printf("Enter %d kid cell:",j);
    	scanf("%f",&s[j].kidcell);
    	fprintf(p," \t\t%.1f",s[j].kidcell);
	}
	//merged data
	printf("ENter cell name:")
	scanf("%s",cellname);
	for (i=0;i<5;i++)
	{
		if(cellname==s[i].)
	}


	

    
    
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}