#include <iostream>
#include<string>
using namespace std;

string RemovePunctuation(string s1)
{
	string s2 = "";
	for (int i = 0; i < s1.length(); i++)
	{
		if (!ispunct(s1[i]))
			s2 += s1[i];
			
	}
	return s2;
}
	

int main()
{
	string s1 = "Welcome to Jordan , Jordan: is a nice country\n";

	cout << "Origin string : \n";
	cout << s1;
	cout << "\n\nString without punctuations : \n";
	cout << RemovePunctuation(s1);
	
		system("pause>0");
	return 0;

}
