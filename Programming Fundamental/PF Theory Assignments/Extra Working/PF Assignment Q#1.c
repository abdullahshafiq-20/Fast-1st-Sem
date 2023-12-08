#include<stdio.h>
int random(char [6][5],int,int);
int print(char [6][5]);
int searching(char [6][5],char [],int);
int length(char [6]);
int compare(char [],int);

int main(){
	int id,len,i,copy,score=0,scores;
	printf("Student name: Muhammad Umar Farooq\n");
	printf("Student ID: 22K-4090\n");
	printf("Enter your roll number only last 4 digit: ");
	scanf("%d",&id);
	copy=id;
	char game[6][5];
	
	random(game,id,copy);
	print(game);
	char arr[6];
	fflush(stdin);
	printf("Enter string to be find: ");
	scanf("%s",arr);
	len=length(arr);
	
	for(i=0;compare(arr,len);i++){
		
		if(searching(game,arr,len)==1){
			score+=1;
		}
		else{
			score-=1;
		}
		printf("your score is: %d\n",score);
		
		copy+=1100;	
		random(game,id,copy);
		print(game);
	
		printf("Enter string to be find  ");
		scanf("%s",arr);			
		len=length(arr);		
		}
}
int random(char game[6][5],int id,int copy){
	int a,c,copy_id,x=2;
	copy_id=copy;
	
	copy_id/=100;
	c=copy_id%10;
	copy_id/=10;
	a=copy_id%10;
	
	int i,j,upper=122,lower=97;
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			x=((a*x+c*x)%(upper-lower+1)+lower);
			game[i][j]=x;
		}
    }
    i=5;
    copy=id;
    for(j=3;j>=0;j--){
    	game[i][j]=copy%10+48;
    	copy/=10;
	}
}
int print(char game[6][5]){
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			printf("%c ",game[i][j]);
		}
		puts("");
	}
}
int searching(char game[6][5],char arr[],int len){
	int i=0,j=0,k=0,row=0,col=0,a;
	int I,J,K=0;

	for(i=0;i<6;i++){
		for(j=0;j<5;j++){	
		    k=0;
			if(arr[k]==game[i][j]){
				k=1;
				if(len==1){
				printf("Found\n");
				return 1;
				}
				if(arr[k]==game[i+1][j]){

					row=1;
					I=i+1;
					J=j;
					K=k;
					if(len==2){
					printf("Found\n");
					return 1;
					}	
					break;
				}		
				else if(arr[k]==game[i][j+1]){
					I=i;
					K=k;
					J=j+1;
					col=1;
					if(len==2){
					printf("Found\n");
					return 1;
					}
					break;
				}
			}
		}
		if(row == 1 || col ==1){
			break;
		}
	}
	if(row==0 && col ==0){
		printf("no match found\n");
		return 0;
	}
	if(row==1 && len>2){
		K=2;
		for(a=0;a<len-2;a++){
			
			if(arr[K] == game[I+1][J]){
				if(K==len-1){
					printf("found\n");
					return 1;
					break;
				}
				else{
					I++;
					K++;
				}			
			}		
			else{		
				printf("No match found\n");
				return 0;
				break;
			}
		}	
		
	}
	else if(col==1 && len>2){	
		K=2;
		for(a=0;a<len-2;a++){
			if(arr[K]==game[I][J+1]){
				if(K==len-1){
					printf("found\n");
					return 1;
					break;
				}
				else{
					J++;
					K++;
				}
			}
			else{
				printf("NO match found\n");
				return 0;
				break;
			}
		}
	}
	
}

int length(char arr[6]){
	int i=0;
	while (arr[i] !='\0'){
		i++;
	}
	return i;
}

int compare(char arr[],int len){
	int i;
	char str[3]="END";
	for(i=0;i<3;i++){
		if(arr[i]==str[i]){
			continue;
		}		
		else{
			return 1;
		}
	}
	return 0;
}
















