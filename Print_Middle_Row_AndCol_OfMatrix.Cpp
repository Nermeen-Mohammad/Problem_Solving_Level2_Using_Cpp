#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int RandomNumbers(int from, int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}
void FillArrayWithRandomNumbers(int array[3][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			array[i][j] = RandomNumbers(1, 10);
	}

}
void PrintArray(int array[3][3], short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++) {
			printf(" %0*d   ", 2, array[i][j]);
		}
		cout << endl;
	}
	
}

void PrintMiddleRowsOfMatrix(int array[3][3], short row, short col)
{
	short Middle = row / 2;

		for (short j = 0; j < col; j++) {
			printf(" %0*d   ", 2, array[Middle][j]);
		}
		cout << endl;
	
}

void PrintMiddleColsOfMatrix(int array[3][3], short row, short col)
{
	short Middle = col / 2;

	
		for (short j = 0; j < row; j++) {
			printf(" %0*d   ", 2, array[j][Middle]);
		}
		cout << endl;
	}

int main()
{
	srand((unsigned)time(NULL));

	int array1[3][3];
	
	short row = 3, col = 3;

	cout << "\nMatrix elements :\n";
	FillArrayWithRandomNumbers(array1, row, col);
	PrintArray(array1, row, col);

	cout << "\nMiddle Row of Matrix1 is:\n";
	PrintMiddleRowsOfMatrix(array1, 3, 3);

	cout << "\nMiddle Col of Matrix1 is:\n";
	PrintMiddleColsOfMatrix(array1, 3, 3);
}