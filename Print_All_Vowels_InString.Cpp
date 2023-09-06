
#include <iostream>
#include<string>
using namespace std;



string ReadString()
{
	string X;
	cout << "\nPLease enter a string\n";
	getline(cin,X);
	return X;
}

bool IsVowel(char ch)
{
	ch = tolower(ch);
	return ((ch == 'a') || (ch == 'u') || (ch == 'i') || (ch == 'e')||(ch == 'o'));
}

void PrintVowels(string X)
{
	int counter = 0;
	for (int i = 0; i < X.length(); i++) {

		if (IsVowel(X[i]))
			cout << X[i] << " ";
		
	}
	
}


int main()
{
	
	string x = ReadString();
	cout << "Vowels in string are : ";
	PrintVowels(x);
		




	system("pause>0");
	return 0;

}
