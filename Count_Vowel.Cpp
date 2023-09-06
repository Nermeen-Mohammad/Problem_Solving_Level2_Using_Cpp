
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

int VowelCount(string X)
{
	int counter = 0;
	for (int i = 0; i < X.length(); i++) {

		if (IsVowel(X[i]) )
			counter++;
		
	}
	return counter;
}


int main()
{
	
	cout << "Numbers of vowel : "<< VowelCount(ReadString());




	system("pause>0");
	return 0;

}
