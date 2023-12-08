#include <stdio.h>
int main()
{
	char coffe,size;
	printf("Choose Coffe Manual:\n W/w for WHITE COFFE\n B/b for BLACK COFFE\n");
	scanf("\n%c",&coffe);
	switch(coffe)
	{
		case'W':
	    case'w':
		printf("Pur Water: 15 min\n");
		printf("Sugar: 15 min\n");
		printf("Mix Well: 20 min\n");
		printf("Add Coffe: 2 min\n");
		printf("Add Milk: 4 min\n");
		printf("Mix Well: 20 min\n");
		printf("Total Time: 76 min\n");
		printf("\nChoose your SIZE:\n D/d for DOUBLE");
		scanf("\n%c",&size);
	    switch(size)
	    {
	      case'd':
	      case'D':
	      printf("Pur Water: 22.5 min\n");
		  printf("Sugar: 22.5 min\n");
		  printf("Mix Well: 30 min\n");
		  printf("Add Coffe: 3 min\n");
		  printf("Add Milk: 6 min\n");
		  printf("Mix Well: 30 min\n");
		  printf("Total Time: 114 min\n");   
	    }
		break;
		case'B':
		case'b':
		printf("Pur Water: 20 min\n");
		printf("Sugar: 20 min\n");
		printf("Mix Well: 25 min\n");
		printf("Add Coffe: 15 min\n");
		printf("Mix Well: 25 min\n");
		printf("Total Time: 105 min\n");
		printf("\nChoose your SIZE:\n D/d for DOUBLE");
		scanf("\n%c",&size);
	    switch(size)
	    {
		  case'd':
	      case'D':
	      printf("Pur Water: 30 min\n");
		  printf("Sugar: 30 min\n");
		  printf("Mix Well: 37.5 min\n");
		  printf("Add Coffe: 22.5 min\n");
		  printf("Mix Well: 22.5 min\n");
		  printf("Total Time: 142.5 min\n");   	
	    }    	
	}
}


