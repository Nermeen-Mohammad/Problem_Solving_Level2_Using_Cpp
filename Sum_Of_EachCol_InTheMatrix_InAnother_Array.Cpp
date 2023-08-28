#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int RandonNumber(int from, int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}
void FillMatrixWithRandomNumbers(int array[3][3], short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			array[i][j] = RandonNumber(1, 100);
		}
}


}
void PrintMatrix(int array[3][3], short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			cout<<setw(3) << array[i][j];
		}
		cout << endl;
	}
}
int ColSum(int array[3][3], short row, short j)
{
	int sum = 0;

	for (short i = 0; i <= row-1; i++)
	
		{
			sum+= array[i][j];
		}
	return sum;

}
void SumMatrixColInArray(int array[3][3], short row, short col, int array2[3])
{
	for (short j = 0; j < col; j++)
	{
		array2[j] = ColSum(array, row, j);
	}
}

void PrintColsSumArray(int array2[3] , int Length)
{
	cout <<"\nThe the following are the sum of each col in the matrix : \n";
	for (short i = 0; i < Length; i++)
	{
		cout << " Col " << i + 1 << " Sum = " << array2[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int array[3][3];
	int array2[3];
	short row=3, col=3;

	FillMatrixWithRandomNumbers(array, row, col);

	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(array, row, col);

	SumMatrixColInArray(array, row, col, array2);

	PrintColsSumArray(array2, 3);

}