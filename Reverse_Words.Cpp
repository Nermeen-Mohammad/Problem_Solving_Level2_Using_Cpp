
#include <iostream>
#include<vector>
#include<string>
using namespace std;

string ReadString()
{
	cout << "Enter a string: ";
	string s;
	getline(cin, s);
	return s;
}

vector <string> splitString(string s, string delim)
{
	vector<string> vec;
	int pos = 0;
	string word="";
	while ((pos = s.find(delim)) != std::string::npos)
	{
		word = s.substr(0, pos);
		if (word != "") {
			vec.push_back(word);
		}
		s.erase(0, pos + delim.length());
   
	}
	if (s != "")
	{
		vec.push_back(s);
	}
	return vec;
}

string ReverseWordsInString(string s)
{
	vector <string> vec;
	string s2 = "";
	vec = splitString(s, " ");

	vector <string>::iterator it = vec.end();
	while (it != vec.begin())
	{
		--it;
		s2 += *it + " ";
	}
	s2 = s2.substr(0, s2.length() - 1);
	return s2;
}



int main()
{
	string s = ReadString();
	cout << "\n\nString after reversing words :";
	cout << "\n" << ReverseWordsInString(s);
	system("pause>0");
	return 0;
	
}
