
#include <iostream>
#include <string>
using namespace std;

string Readstring()
{
	string S;
	cout << "Please enter your stringr :\n";
	getline(cin,S);
	return S;
}

string InvertstringCase(string S)
{
	for (int i = 0; i < S.length(); i++) {
		S[i] = isupper(S[i]) ? tolower(S[i]) : toupper(S[i]);
	}
	return S;
}
	




int main()
{
	string S = Readstring();
	cout << "\nstring after inverting case: \n";
	cout << InvertstringCase(S) << endl;

}
