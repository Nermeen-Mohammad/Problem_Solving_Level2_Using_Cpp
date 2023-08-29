#include<iostream>
#include<iomanip>
using namespace std;

void PrintMatrix(int Matrix[3][3], short col, short row)
{
	
		for (short i = 0; i < row; i++)
		{
			for (short j = 0; j < col; j++)
			{
				cout<<setw(3) <<Matrix[i][j] << " ";
			}
			cout << endl;
		}

	}
int CountNumberInMatrix(int Matrix[3][3], short col, short row, int number)
{
	int count = 0;

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			if (Matrix[i][j] == 0)
				count++;
		}

	}
	return count;
}

int IsSparseMatrix(int Matrix[3][3], short col, short row)
{
	int MatrixSize = col * row;
	return (CountNumberInMatrix(Matrix,3,3,0) >= (MatrixSize/2));
}

int  main()
{
	//int Matrix1[3][3] = { {0,0,12},{9,9,1},{0,0,9} };
	int Matrix1[3][3] =  { {16, 0, 12}, { 9,9,1 }, { 98,0,9 } };

	cout << "\nMatrix :\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsSparseMatrix(Matrix1,3,3))
		cout << "\nYes: It is Sparse\n";
	else
		cout << "\n	No: It is Not Sparse\n";

}
	