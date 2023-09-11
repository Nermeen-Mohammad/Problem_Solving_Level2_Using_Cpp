
#include <iostream>
#include<vector>
#include<string>
using namespace std;

string JoinString(vector <string> sVector, string delim)
{
	string NewString = "";
	for (int i = 0; i < sVector.size(); i++)
	{
		 NewString += sVector[i] + delim;
	}
	return NewString.substr(0, NewString.length()- delim.length());
}

string JoinString(string array[], string delim,int ArrayLength)
{
	string NewString = "";
	for (int i = 0; i < ArrayLength; i++)
	{
		NewString += array[i] + delim;
}
	return NewString.substr(0, NewString.length() - delim.length());
}

int main()
{
	vector <string> sVector = { {"Programmer"}, {"Nermeen"},{"Almomani"}};
	string array[] = { "Programmer","Nermeen","Almomani" };
	int ArrayLength = 3;

	cout<<"Vector after join : " << JoinString(sVector, " ");
	cout <<"\n\nArray after join : " << JoinString(array, " ", ArrayLength);
	

	system("pause>0");
	return 0;
	
}
