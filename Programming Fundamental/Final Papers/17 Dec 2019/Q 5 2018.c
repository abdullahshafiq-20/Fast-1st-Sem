#include<stdio.h>
#include<stdlib.h>

void* MergeArray(const void *Aray1,size_t size1,const void *Aray2,size_t size2) {
	char *ptr;
	int i,j,k;
	int x=size1+size2;

	char *Array1 = (char *) Aray1;
	char *Array2 = (char *) Aray2;

	ptr=(char *)calloc(x,sizeof(char));

	for(i=0; i<size1; i++) {
		ptr[i]= *(Array1 + i);
	}
	k=0;
	for(j=i; j<=x; j++) {
		ptr[j]=*(Array2 + k++);
	}
	return ptr;
}
void main() {
	int one,two;
	int i=0;
	char *a;
	printf("Enter size of 1st array: ");
	scanf("%d",&one);
	printf("Enter size of 2nd array: ");
	scanf("%d",&two);
	char a1[one],a2[two];
	for(i=0; i<one; i++) {
		printf("\nEnter Elements at %d index of Array1",i);
		scanf(" %c",&a1[i]);
	}
	printf("\n\n");
	for(i=0; i<two; i++) {
		printf("\nEnter Elements at %d index of Array2",i);
		scanf(" %c",&a2[i]);
	}
	a=(char *)MergeArray(&a1,one,&a2,two);
	int b=one+two;
	for(i=0; i<b; i++) {
		printf("%c",*(a+i));
	}
}
