#include<stdlib.h>
int main()
{
   char option;
   printf("are you sure to delete\n");
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
   	
	
	
	
	
	
	
	
	
	
	
	
	
	
}