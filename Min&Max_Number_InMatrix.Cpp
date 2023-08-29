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

int MinNumberInMatrix(int Matrix1[3][3], short row, short col)
{
	int min = Matrix1[0][0];
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			if (Matrix1[i][j] < min) {
				min = Matrix1[i][j];
			}
		}
		
	}
	return min;
}

int MaxNumberInMatrix(int Matrix1[3][3], short row, short col)
{
	int max = Matrix1[0][0];
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			if (Matrix1[i][j] > max) {
				max = Matrix1[i][j];
			}
		}
		
	}
	return max;
}

int  main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} }; 
	short row=3, col = 3;

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	
	cout <<"\n Mininmum Number In Matrix is :  "; 
	cout << MinNumberInMatrix(Matrix1, row, col);
	
	cout << "\n Maxinmum Number In Matrix is :  ";
	cout << MaxNumberInMatrix(Matrix1, row, col);

}
	