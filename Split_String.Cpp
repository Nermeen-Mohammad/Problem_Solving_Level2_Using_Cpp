
#include <iostream>
#include<vector>
#include<string>
using namespace std;

string ReadString()
{
	string X;
	cout << "\nPLease enter a string\n";
	getline(cin,X);
	return X;
}


vector <string> SplitString(string x, string delim)
{
	vector <string> vString;


	short pos = 0;
	string word = "";
	while ((pos = x.find(delim)) != std::string::npos)
	{
		word = x.substr(0, pos);
		if (word != "")
		{
			vString.push_back(word);
		}


		x.erase(0, pos + delim.length());

	}
	
	if (x != ""){
		vString.push_back(x);
}
	return vString;
}
	


int main()
{
	
	vector<string> vString;

	
	vString = SplitString(ReadString(), " ");

	cout << "Tokens : " << vString.size() << endl;
	for (string& i : vString)
		cout << i << endl;

	
	system("pause>0");
	

}
