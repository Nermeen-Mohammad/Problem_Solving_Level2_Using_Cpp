
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

int CountWords(string x)
{
	int CountWords = 0;
	string delim = " "; //delimiter
	
	short pos = 0;
	string sWord;

	// use find() function to get the position of the delimiters 
	while ((pos = x.find(delim)) != std::string::npos) {
		sWord = x.substr(0, pos);// store the wor
		if (sWord != "") {
			 CountWords++;
		}
		x.erase(0, pos + delim.length());/* erase() until positon and move to next word. */

	}

	return ++CountWords;

}



int main()
{
	
	string x = ReadString();
	
	cout <<"The number of words in your string : " << CountWords(x) << " words";



	system("pause>0");
	return 0;

}
