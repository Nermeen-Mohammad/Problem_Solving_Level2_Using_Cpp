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
bool IsNumberInMatrix(int Matrix[3][3], short col, short row, int number)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			if (Matrix[i][j] == number)
				return true;
		}

	}
	return false;
}

int  main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };

	cout << "\nMatrix :\n";
	PrintMatrix(Matrix1, 3, 3);

	cout <<"\n Please Enter the number to look for in matrix? "; 
	int n; 
	cin >> n;

	if (IsNumberInMatrix(Matrix1,3,3, n))
		cout << "\nYes it is there.\n";
	else
		cout << "\n	No: It's NOT there\n";

}
	