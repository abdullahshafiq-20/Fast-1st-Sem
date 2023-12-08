#include<stdio.h>
int main()
{
	// Create a two-dimensional 3x7 array.
	int junk_t = 3;
	int days = 7;
	int junk[junk_t][days];
	double tons, least, most, sum = 0;
	

	// Ask user to input data for each junk_truck
	printf( "Input how many tons of junk each junk_truck collected eac day.\n");
	for (int row = 0; row < junk_t; row++)
	{
		for (int col = 0; col < days; col++)
		{
			do
			{

			printf("Junk_truck # %d on day #%d collected:", (row + 1), (col + 1));

			scanf("%f",&tons);

				if (tons <0)
				{
					printf( "Error! Number of tons must be greater than 0.\n");
				}

			} while (tons <0);

			junk[row][col] = tons;


			// Get total junk collected per day by the whole convoy of junk_trucks.
			sum += tons;
		}
		printf("\n");							// make blank space
	}

	// Get least and greatest amount of junk collected by any one junk_truck.
	least = most = junk[0][0];
	for (int row = 0; row < junk_t; row++)
	{
		for (int col = 0; col < days; col++)
		{
			
			if (junk[row][col] < least)
			{ 
				least = junk[row][col];
			}
			if (junk[row][col] > most)
			{ 
				most = junk[row][col];
			}
		}
	}

	printf( "\nJunk_truck Weekly Junk Report\n");


	printf( "Average amount of junk collected per day is %f tons:",sum/21.0 );
	printf( "Least amount of junk ecollected in tons: %d\n",tons);
	printf( "Greatest amount of junk ecollected in tons:%d\n",most);

	return 0;
}