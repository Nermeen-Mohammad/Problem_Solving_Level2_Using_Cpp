
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

void PrintWords(string x)
{
	string delim = " "; //delimiter
	cout << "\n\nYour words are :\n\n";
	short pos = 0;
	string sWord;

	// use find() function to get the position of the delimiters 
	while ((pos = x.find(delim)) != std::string::npos) {
		sWord = x.substr(0, pos);// store the wor
		if (sWord != "") {
			cout << sWord << endl;
		}
		x.erase(0, pos + delim.length());/* erase() until positon and move to next word. */

	}

	if (x != "")
	{
		cout << x << endl;// it print last word of the string.
	}

}



int main()
{
	
	string x = ReadString();
	
	PrintWords(x);



	system("pause>0");
	return 0;

}
