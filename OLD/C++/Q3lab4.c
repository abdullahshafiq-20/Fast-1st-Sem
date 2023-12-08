#include<stdlib.h>
int main()
{
   char option;
   printf("Are you sure to delete [Y/y] / [N/n] ?\n");
   scanf("%ch",&option);
   
   switch(option)
   {
   case 'y':
   case 'Y':
   printf("Deleted successfully");
   break;
    	
    case 'N':
	case 'n':
	printf("Delete cancelled");
    break;	
    
    default:
    printf("invalid input");	
   }	
}