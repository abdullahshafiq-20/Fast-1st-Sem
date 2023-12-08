#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void searchrows(char table[5][6], char searchval[6]);
void searchcols(char table[5][6], char searchval[5]);
int score=0;
int found=0;//flag
int main(){
	
	int i,j;
	char table[5][6];
	char value,id[4];
	char searchval[6];
	printf("Enter last 4 digits of your student ID: ");
	scanf("%d", &id);
	srand(value);
	printf("\n\nYour crossword puzzle is: \n\n");
	
	for (i=0; i<4; i++){
		for (j=0; j<6; j++){
			table[i][j]= (rand()%26)+65;
			printf("%c ", table[i][j]);
		}
		printf("\n");
	}
	
	strcpy(table[4],id);
	table[4][4]=(rand()%26+65);
	table[4][5]=(rand()%26+65);
	
	for (i=4,j=0; j<6; j++){
		printf("%c ", table[i][j]);
	}
	
	while(1){
		printf("\n\nEnter search value(Enter ""END"" to exit): ");
		scanf("%s", &searchval);
		if (strcmp(searchval,"END")==0){
			break;
		}
		
		if (strlen(searchval)>6){
			printf("Invalid search value!\n");
		}
		else if(strlen(searchval)==6){
			searchrows(table,searchval);
		}
		else{
			searchrows(table,searchval);
			if(!found){
				searchcols(table, searchval);
			}
			
		}
		
	}
}

void searchrows(char table[5][6], char searchval[6]){
		int len=strlen(searchval);
		int i,a,x,j;//i=starting index of column, j=ending index of column, x=startval, a=row no//
		char newarr[len-1];//part of table stored in newarray.
		found=0;
		
		//Searching in each row//
		for(a=0; a<5; a++){
			
			for(j=len; j<7; j++){
			    i=j-len;
				for(x=0; i<j ; i++){
					newarr[x]=table[a][i];
					x++;
				}
				
				if(strncmp(newarr,searchval,len)==0){
					score++;
					printf("%s is present! Score= %d", searchval,score);
					found=1;
					break;
				}
				
			}
			if(strncmp(newarr,searchval,len)==0){
				break;
			}
		
		}
		
}

void searchcols(char table[5][6], char searchval[5]){
		int len=strlen(searchval);
		int i,a,x,j;//i=starting index of row, j=ending index of row, x=startval, a=col no//
		char newarr[len-1];//part of table stored in newarray.
		found=0;
		
		//Searching in each column//
		for(a=0; a<6; a++){
			
			for(j=len; j<6; j++){
			    i=j-len;
				for(x=0; i<j ; i++){
					newarr[x]=table[i][a];
					x++;
				}
				
				if(strncmp(newarr,searchval,len)==0){
					score++;
					printf("%s is present! Score= %d", searchval,score);
					found=1;
					break;
				}
				
			}
			if(strncmp(newarr,searchval,len)==0){
				break;
			}
		
		}
		if(!found){
			score--;
			printf("%s is not present! Score= %d\n", searchval,score);
		}
}



