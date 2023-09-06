
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

string ToUpper(string S)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < S.length(); i++)
	{
			S[i] = toupper(S[i]);	
			
	}
	return S;

}

string ToLower(string S)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < S.length(); i++)
	{
		S[i] = tolower(S[i]);

	}
	return S;

}
int main()
{
	string string1 = ReadString();
	cout << "\nString after upper\n";
	cout << ToUpper(string1)<<endl;

	cout << "\nString after lower\n";
	cout << ToLower(string1) << endl;
}
