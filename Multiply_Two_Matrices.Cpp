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
void PrintArray(int array[3][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			printf(" %0*d   ", 2, array[i][j]);
		}
		cout << endl;
	}
	
}

void ResultInNewArray(int array1[3][3], int array2[3][3],int MatrixResults[3][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			MatrixResults[i][j] = array1[i][j] * array2[i][j];
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int array1[3][3];
	int array2[3][3];
	int MatrixResults[3][3];
	int row = 3, col = 3;

	cout << "\nMatrix 1 :\n";
	FillArrayWithRandomNumbers(array1, row, col);
	PrintArray(array1, row, col);

	cout << "\nMatrix 2 :\n";
	FillArrayWithRandomNumbers(array2, row, col);
	PrintArray(array2, row, col);


	cout << "\nMatrix 3 Result of Multiplication :\n";
	ResultInNewArray(array1, array2, MatrixResults, row, col);
	PrintArray(MatrixResults, row, col);

}