#include <stdio.h>
int main(){
int a,i,num=0,pos=1,digits=4,opt;
char ch;
printf("if you want to do encryption press 1 \nand for decryption press 2 \n");
scanf("\n%d",&opt);
switch(opt){
  case 1:
puts("Enter a  number");
scanf("%d",&a);
for (i=1;i<=4;i++){
	printf("%c", a%10+65);
	a /= 10;
}
break ;
case 2:
puts("Enter a  character");
for (i=1;i<=4;i++){
	
	scanf(" %c",&ch);
	num += (ch-65)*pos;
	
	pos *= 10;
}
	printf("%d",num);
}
}