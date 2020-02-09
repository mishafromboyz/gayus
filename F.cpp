#include "Bedi_s_bashkoi.h"

int main()
{
	int x, y, z;			//roots of slay
	float matrix[cap][cap];	//matrix - left part
	float vector[cap];		//vector - right part

	int i, j, k;			//this is counter variables
	float compare;			//this is for modified gauss thing
	float temp[cap+1];		//this is temporary array

	for (i = 0; i < cap; i++)//this will fill left part
	{
		for (j = 0; j < cap; j++)
		{
			std::printf("matrix[%d][%d] = ", i, j);
			std::cin >> matrix[i][j];
		}
	}

	for (i = 0; i < cap; i++)//this will fill right part
	{
		std::printf("vector[%d] = ", i);
		std::cin >> vector[i];
	}

	for (i = 0; i < cap; i++)//this will print slay
	{
		for (j = 0; j < cap ;j++)
		{
			std::cout << matrix[i][j] << " ";
		}

		std::cout <<"| "<< vector[i];
		std::cout << endl;
	}
	
	compare = matrix[0][0];

	for (i = 1; i < cap; i++) // i is row number
	{
		if (std::abs(compare) < std::abs(matrix[i][0])) 
		{
			cout << "new is bigger, gonna swap" << endl;
			compare = matrix[i][0];
			j = i;
		}
	}

	if (compare != matrix[0][0])
	{
		for (i = 0; i < cap; i++)//swaping
		{
			temp[i] = matrix[j][i];
			matrix[j][i] = matrix[0][i];
			matrix[0][i] = temp[i];
		}
		temp[i] = vector[j];
		vector[j] = vector[0];
		vector[0] = temp[i];
	}

	for (i = 0; i < cap; i++)//this will print modified slay
	{
		for (j = 0; j < cap; j++)
		{
			std::cout << matrix[i][j] << " ";
		}

		std::cout << "| " << vector[i];
		std::cout << endl;
	}

	for (i = 1; i < cap; i++)
	{
		
	}


	return 0;
}