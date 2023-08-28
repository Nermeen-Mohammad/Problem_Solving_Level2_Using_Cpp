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

int SumNumbersInMatrix(int array[3][3], short row, short col)
{
	int Sum = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
			Sum += array[i][j];
	}
	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int array1[3][3];

	short row = 3, col = 3;

	cout << "\nMatrix elements :\n";
	FillArrayWithRandomNumbers(array1, row, col);
	PrintArray(array1, row, col);

	cout << "\n Sum of Matrix is : " << SumNumbersInMatrix(array1, row, col) << endl;
}