
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

char ReadChar()
{
	char X;
	cout << "\nPLease enter a character\n";
	cin >> X;
	return X;
}

char InvertCharCase(char X)
{
	return isupper(X) ? tolower(X) : toupper(X);
}

short CountLetters(string S, char X, bool MatchCase = true)
{
	int Counter = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if (MatchCase)
		{
			if(S[i]==X)
				 Counter++;
		}
		else
		{
			if (tolower(S[i]) == tolower(X));
			Counter++;
		}
	}
	return Counter;
}
	


int main()
{
	string S = Readstring();
	char X = ReadChar();
	

	cout << "\nLetter " << X << "count: "<< CountLetters(S, X);

	cout << "\nLetter \'" << X << "\' ";
	cout << "Or \'" << InvertCharCase(X) << "\' ";
	cout << " Count = " << CountLetters(S, X, false);

	system("pause>0");
	return 0;

}
