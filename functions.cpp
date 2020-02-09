#include "bedi_s_bashkoi.h"

void subtractrow(float *matrix[], int firstrow, int secondrow)
{
	for (int i = 0; i < cap; i++)
	{
		matrix[firstrow][i] -= matrix[secondrow][i];
	}
}

void multiplyrow(float *matrix[], int rownumber, float multiplicator)
{
	for (int i = 0; i < cap; i++)
	{
		matrix[rownumber][i] *= multiplicator;
	}
}