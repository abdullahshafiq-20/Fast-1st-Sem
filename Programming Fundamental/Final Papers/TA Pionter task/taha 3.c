#include <stdio.h>
#include <string.h>
int main() {
	char s1[50]= {"yasir"};
	char s2[50]= {"danish"};
	char c[25];
	gets(c);
	int l=strlen(c);
	int temp,temp1;
	for(int i=0; i<10; i++) {
		temp=0;
		temp1=0;

		if(i%2==1) {
			for(int k=0; k<l; k++) {
				if(c[k]=='y'&&c[k+1]=='y'&&c[k-1]=='y')
					c[k]=' ';
				temp=1;
			}
			if(temp!=1) {
				printf("%s wins",s2);
				break;
			}
		} else {
			for(int k=0; k<l; k++) {
				if(c[k]=='b'&&c[k+1]=='b'&&c[k-1]=='b')
					c[k]=' ';
				temp=1;
			}
			if(temp1!=1) {
				printf("%s wins",s1);
				break;     
			}
			    
		}
	}
}