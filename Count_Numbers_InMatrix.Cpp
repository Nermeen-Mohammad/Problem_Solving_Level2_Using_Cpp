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

int SumElementsInMatrix(int Matrix[3][3], short col, short row, short number)
{
	
	int count = 0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++) {
			if (Matrix[i][j] == number)
				count++;
		}
	}
		return count;
}

int  main()
{
	int Matrix1[3][3] = { {9,1,12},{0,9,1},{0,9,9} };
	cout << "\nMatrix :\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nEnter the number to count in matrix? "; 
	int number;
	cin >> number;


	cout << "\nNumber " << number << " count in matrix is " << SumElementsInMatrix(Matrix1, 3, 3, number)<<endl;

}
