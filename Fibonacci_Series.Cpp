
#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
	int number;
	do
	{
		cout << Message;
		cin >> number;
	} while (number < 0);
	return number;
}

void PrintFibonacciSeriesNumbers(int number)
{
	int prev1 = 1, prev2 = 0, p;
	cout << "1" << "  ";
	for (int i = 1; i < number; i++)
	{
		p = prev1 + prev2;
		prev2 = prev1;
		prev1 = p;

		cout << p << "  ";
	}

}
int main()
{
	int number = ReadNumber("Please enter a number : ");
	PrintFibonacciSeriesNumbers(number);
}
