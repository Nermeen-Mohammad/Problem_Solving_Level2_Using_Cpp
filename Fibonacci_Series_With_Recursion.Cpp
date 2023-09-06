
#include <iostream>
using namespace std;



void PrintFibonacciSeriesNumbers(int prev1, int prev2, int number)
{
	
	if (number > 0)
	{
		int p = prev1 + prev2;
		prev2 = prev1;
		prev1 = p;
		cout << p << " ";

		PrintFibonacciSeriesNumbers(prev1,prev2, number-1);
	}

}
int main()
{
	
	int prev1 = 1, prev2 = 0, number=10;
	PrintFibonacciSeriesNumbers(1,0,10);
}
