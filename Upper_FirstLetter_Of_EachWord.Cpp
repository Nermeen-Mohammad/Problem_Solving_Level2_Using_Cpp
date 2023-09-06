
#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
	string S;
	cout << "Please enter your string :\n";
	getline(cin, S);
	return S;
}

string PrintUpperFirstLetter(string S)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ' && IsFirstLetter)
		{
			S[i] = toupper(S[i]);
		}
		IsFirstLetter = (S[i] == ' ' ? true : false);
		
	}
	return S;

}
int main()
{
	
	cout << PrintUpperFirstLetter(ReadString());
}
