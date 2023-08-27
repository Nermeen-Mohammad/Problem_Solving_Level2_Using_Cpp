#include <iostream>
#include<iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;		
}
void FillMatrix(int array[3][3])
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			array[i][j] = RandomNumber(1, 100);
	}
}
void PrintMatrixElements(int array[3][3])
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << setw(3) <<array[i][j] <<"  ";
		    cout << endl;
	}
	
}
void SumEachRow(int array[3][3], short col, short row)
{
	int SumRow = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			SumRow += array[i][j];
		}
		cout << "Row " << i + 1 << " Sum = " << SumRow << endl;
	}
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	cout << "The Following is a 3×3 Random Matrix:\n";

	int array[3][3];

	FillMatrix(array);
	PrintMatrixElements(array);

	cout << "\nThe Following are the sum of each row in the Random Matrix:\n";
	SumEachRow(array, 3, 3);

	
}

