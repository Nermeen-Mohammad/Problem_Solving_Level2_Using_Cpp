
#include <iostream>
#include <string>
using namespace std;

string Readstring()
{
	string S;
	cout << "Please enter your string :\n";
	getline(cin,S);
	return S;
}
char ReadChar()
{
	char X;
	cout << "\nPLease enter a character\n";
	cin >> X;
	return X;
}
int CountLetters(string S, char X)
{
	int count = 0;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == X)
			count++;
	}
	return count;
}
	


int main()
{
	string S = Readstring();
	char X = ReadChar();
	

	cout << "\nLetter " << X << "count: "<< CountLetters(S, X);
	

}
