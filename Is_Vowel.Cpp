
#include <iostream>
using namespace std;



char ReadChar()
{
	char X;
	cout << "\nPLease enter a character\n";
	cin >> X;
	return X;
}

bool IsVowel(char X)
{
	 X = tolower(X);
	return ((X == 'a') || (X == 'i') || (X == 'e') || (X == 'y') || (X == 'o'));
}


int main()
{

	char X = ReadChar();
	if (IsVowel(X))

		cout << "Yes, letter " << X << " is vowel\n";

	else
		cout << "No, letter " << X << " is not vowel\n";




	system("pause>0");
	return 0;

}
