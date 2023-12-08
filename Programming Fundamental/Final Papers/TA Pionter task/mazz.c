#include <stdio.h>

 main() 
{
    int a=10;//variable initilialisation//
    int *p=&a;//stores the address of a in p//
    int *q=p;//stores the address of p in q//
    int *b=*p;//stores the value of a in b//
    int **r=&p;//stores the address of pointer p//
    printf("address of a %d\n",a);
    printf("address of a %d\n",p);//pointer p has address of a//
    printf("address of a %d\n",q);//pointer q has the value that p has which is the address of a//
    printf("address of a %d\n",r);//r is being referenced to so it means that whatever address r has it goes to that address and prints the value stored at that address//
    printf("address of p %d\n",p);//address of pointer p//
    printf("address of p %d\n",*r);//stores the address of the pointer p//
    printf("address of p %d\n",r);//pointer r stores the address of the pointer p//
    printf("address of q %d\n",q);//address of q//
    printf("address of b %d\n",b);//address of b//
    printf("address of r %d\n",r);//address of r//
    printf("value of a is:%d and:%d\n",a,*p);//value of a is printed by referring to the value stored at address that p has//
	printf("value of a:%d",b);//since b stores the value that is at the address stored by p it has the value of a//
    printf("value of a is :%d\n",*q);//since the pointer q has the address that p has and it is being referred so it prints the value stored at that address which is a//
    printf("value of a is :%d",**r);//since double pointer r stores the address that p has and it is also being referred it prints the value stored at that address(a)//    
}