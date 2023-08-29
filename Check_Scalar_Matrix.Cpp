#include<iostream>
using namespace std;

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

bool ScalarMatrix(int Matrix[3][3], short col, short row)
{
	int firstelement = Matrix[0][0];

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++) {
			if (i == j && Matrix[i][j] != firstelement) {
				return false;

			}
			else if (i != j && Matrix[i][j] != 0)
				return false;

		}
	}
	return true;
}
int  main()
{
	int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
	

	cout << "\nMatrix :\n";
	PrintMatrix(Matrix1, 3, 3);

	if (ScalarMatrix(Matrix1,3,3))
		cout <<"\nYES: Matrix is Scalar\n";

	else
		cout << "\nNo: Matrix is NOT Scalar\n";


}