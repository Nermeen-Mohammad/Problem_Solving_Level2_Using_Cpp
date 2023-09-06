
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

void PrintFirstLetter(string S)
{
	bool IsFirstLetter = true;
	cout << "\nFirst letters of this string:\n";
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ' && IsFirstLetter)
		{
			cout << S[i] << endl;
		}
		IsFirstLetter = (S[i] == ' ' ? true : false);
		
	}
	

}
int main()
{
	
	PrintFirstLetter(ReadString());
}
