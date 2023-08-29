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

bool IsIdintityMatrix(int Matrix[3][3], short col, short row)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++) {
			if (i == j && Matrix[i][j] != 1) {
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
	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	//int Matrix1[3][3] = { {1,3,0},{6,1,0},{0,0,8} };

	cout << "\nMatrix :\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsIdintityMatrix(Matrix1,3,3))
		cout <<"\nYES: Matrix is identity";

	else
		cout << "\nNo: Matrix is NOT identity.\n";


}