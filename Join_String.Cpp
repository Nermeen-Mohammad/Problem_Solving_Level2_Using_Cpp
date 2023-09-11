
#include <iostream>
#include<vector>
#include<string>
using namespace std;

string JoinString(vector <string> sVector, string sprit)
{
	string NewString = "";
	for (int i = 0; i < sVector.size(); i++)
	{
		 NewString += sVector[i] + sprit;
	}
	return NewString.substr(0, NewString.length()-sprit.length());
}


int main()
{
	vector <string> sVector = { {"Programmer"}, {"Nermen"},{"Almomani"}};
	cout<<"Vector after join : " << JoinString(sVector, " ");
	

	system("pause>0");
	return 0;
	
}
