
#include <iostream>
#include<vector>
#include<string>
using namespace std;



string TrimLeft(string x)
{
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] != ' ')
			return x.substr(i, x.length() - 1);
	}
	return "";
}

string TrimRight(string x)
{
	for (int i = x.length() - 1; i >= 0; i--)
	{
		if (x[i] != ' ')
		{
			return x.substr(0, i + 1);
		}
	}
	return ""; // if the input string = just spaces
}

string Trim(string x)
{
	return (TrimLeft(TrimRight(x)));
}
int main()
{
	
	string x = "   Nermeen Almomani   ";
	cout << "\nString : " << x;
	cout << "\n\n Trim Left = " << TrimLeft(x);
	cout << "\n\n Trim right = " << TrimRight(x);
	cout << "\n\n Trim       = " << Trim(x);

	system("pause>0");
	

}
