
#include <iostream>
#include <string>
using namespace std;

char ReadChar()
{
	char S;
	cout << "Please enter your character :\n";
	cin >> S;
	return S;
}

char InvertCharCase(char S)
{
	return isupper(S) ? tolower(S) : toupper(S);
}
	




int main()
{
	char S = ReadChar();
	cout << "\nChar after inverting case: \n";
	cout << InvertCharCase(S) << endl;

}
