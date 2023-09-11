#include <iostream>
#include <vector>
#include<string>
using namespace std;

vector <string> Split(string s1, string delim)
{
	vector <string> vWords;
	short pos = 0;
	string word;
	while ((pos = s1.find(delim)) != std::string::npos) {
		word = s1.substr(0, pos);
		if (word != "")
		{
			vWords.push_back(word);
		}
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "")
	{
		vWords.push_back(s1);
	}
	return vWords;
}


string JoinString(vector <string> vWords, string delim)
{
	string newString;
	for (string& i : vWords) 
	{
		newString += i + delim;
	}
	return newString.substr(0, newString.length() - delim.length());
	
}

string LowerAllString(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}


string ReplaceWordInStringUsingSplit(string s1, string stringToReplace, string ReplaceTo, bool MatchCase = true)
{
	vector <string> vWords = Split(s1, " ");

	for (string& i : vWords)
	{
		if (MatchCase)
		{
			if (i == stringToReplace)
			{
				i = ReplaceTo;
			}
		}
			else
			{
				if (LowerAllString(i) == LowerAllString(stringToReplace))
				{
					i = ReplaceTo;
				
			}
		}
	}
	return JoinString(vWords, " ");
}

int main()
{
	string s1 = "Welcome to Jordan , Jordan is a nice country\n";
	string stringToReplace = "jordan";
	string ReplaceTo = "USA";

	cout << "\nOrigial String\n" << s1;
	cout << "\n\nString After Replace With Match Case:\n";
	cout << "\n" << ReplaceWordInStringUsingSplit(s1, stringToReplace, ReplaceTo);

	cout << "\n\nString After Replace Without Match Case: \n";
	cout << "\n" << ReplaceWordInStringUsingSplit(s1, stringToReplace, ReplaceTo,false);
		system("pause>0");
	return 0;

}
