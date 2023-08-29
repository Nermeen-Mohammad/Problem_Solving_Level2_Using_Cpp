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

bool IsPalindromeMatrix(int Matrix1[3][3], short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			if (Matrix1[i][j] != (Matrix1[i][col - 1 - j]))
				return false;
		}
		
	}
	return true;
}

int  main()
{
	//int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} }; 
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	short row=3, col = 3;

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsPalindromeMatrix(Matrix1,3,3))
		cout << "\nYes: Matrix is Palindrome\n";

	 else  
	 cout << "\nNo: Matrix is NOT Palindrome\n"; 
	

}
	