#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
const int SIZE = 6;

const int ROWS = 4;
const int COLS = 4;
int main()
{
int matrix[ROWS][COLS] = { { 1,223,3 },{ 5,6,7 },{ 9,10,122231 } };

	int rowSum;
	int maxRowSumIndex = 0, maxRowSum = 0;
	for (int i = 0; i < ROWS; ++i)
	{
		rowSum = 0;
		for (int j = 0; j < COLS; ++j)
		{
			rowSum += matrix[i][j];
		}

		if(i == 0)
		{
			maxRowSum = rowSum;
			maxRowSumIndex = 0;
		}
		else
		{
			if(rowSum > maxRowSum)
			{
				maxRowSum = rowSum;
				maxRowSumIndex = i;
			}
		}
	}

	cout << "Row with max sum: " << maxRowSumIndex + 1 << endl;

	int colSum;
	int maxColSumIndex = 0, maxColSum = 0;
	for (int i = 0; i < ROWS; ++i)
	{
		colSum = 0;
		for (int j = 0; j < COLS; ++j)
		{
			colSum += matrix[i][j];
		}

		if (i == 0)
		{
			maxColSum = colSum;
			maxColSumIndex = 0;
		}
		else
		{
			if (colSum > maxColSum)
			{
				maxColSum= colSum;
				maxColSumIndex= i;
			}
		}
	}

cout << "Col with max sum: " << maxColSumIndex + 1 << endl;


    return 0;
}


