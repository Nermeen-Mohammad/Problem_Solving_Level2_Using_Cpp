#include <iostream>
#include<iomanip>
#include<string>
using namespace std;


void FillMatrixWithOrderedNumbers(int array[3][3], short row, short col )
{
	int Counter = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			Counter++;
			array[i][j] = Counter;

		}
}

}

void TrasposedMatrix(int Array[3][3], short row, short col, int TrasposeArray[3][3])
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
			TrasposeArray[i][j] = Array[j][i];
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



int main()
{
	srand((unsigned)time(NULL));

	int array[3][3];
	int TrasposedArray[3][3];
	short row=3, col=3;

	FillMatrixWithOrderedNumbers(array, row, col);

	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(array, row, col);

	TrasposedMatrix(array, 3, 3, TrasposedArray);

	cout << "\nThe following is a transposed  matrix:\n";
	PrintMatrix(TrasposedArray, row, col);
}