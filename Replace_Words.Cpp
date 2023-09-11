
#include <iostream>
#include<string>
using namespace std;

string ReplaceWordInStringUsingBuiltInFunction(string s1, string stringToReplace, string ReplaceTo)
{
	short pos = s1.find(stringToReplace);
	while (pos != std::string::npos) {
		s1.replace(pos, stringToReplace.length(), ReplaceTo);
		pos = s1.find(stringToReplace);
	}
	return s1;
}

	



int main()
{
	string s1 = "Welcome to Jordan,Jordan is a nice country\n";
	string stringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\nOrigial String\n" << s1; 
	cout << "\n\nString After Replace:";
	cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(s1, stringToReplace, ReplaceTo);

	system("pause>0");
	return 0;
	
}
