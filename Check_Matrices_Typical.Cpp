#include<iostream>
using namespace std;


int RandomNumers(short from, short to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;

}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short col, short row)
{
for (short i=0 ; i< row; i++)
	{
	for (short j = 0; j < col; j++)
	{
		Matrix[i][j] = RandomNumers(1, 10);
	}

}

 }

void PrintMatrix(int Matrix[3][3], short col, short row)
{
	
		for (short i = 0; i < row; i++)
		{
			for (short j = 0; j < col; j++)
			{
				printf(" %0*d   ", 2, Matrix[i][j]);
			}
			cout << endl;
		}

	}

bool TypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short col, short row)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++) {
			if (Matrix1[i][j] == Matrix2[i][j])
				return true;

		}
		return false;

	}
}

int  main()
{
	int Matrix1[3][3];
	int	Matrix2[3][3];

	cout << "\nMatrix1 :\n";
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMatrix2 :\n";
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);


	if (TypicalMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYes, Matrices are typical";
	else
		cout << "\nNo, Matrices are not typical\n";

}