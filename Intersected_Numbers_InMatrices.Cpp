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
bool ISNumerInMatrix(int number, int Matrix2[3][3], short col, short row)
{

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++) {
			if (number == Matrix2[i][j])
				return true;
		}
	}
	return false;
}
void PrintIntersectedNumber(int Matrix1[3][3], int Matrix2[3][3], short col, short row)
{
	
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			int number = Matrix1[i][j];
			if (ISNumerInMatrix(number, Matrix2, col, row))
				cout << setw(3) << number << "  ";
			
		}

	}
	
}

int  main()
{
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} }; 
	int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33}};

	cout << "\nMatrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMatrix 2:\n";
	PrintMatrix(Matrix1, 3, 3);


	cout <<"\n Intersected Numbers are:\n "; 
	PrintIntersectedNumber(Matrix1, Matrix2, 3, 3);
	
}
	