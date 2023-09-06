
#include <iostream>
#include <string>
using namespace std;

string Readstring()
{
	string S;
	cout << "Please enter your stringr :\n";
	getline(cin,S);
	return S;
}

int CountSmallLetters(string S)
{
	int SmallCounter = 0;
	for (int i = 0; i < S.length(); i++) {
		if (islower(S[i]) )
		SmallCounter++;
	}
	return SmallCounter;
}
	

int CountCapitalLetters(string S)
{
	int CapitalCounter = 0;
	for (int i = 0; i < S.length(); i++) {
		if (islower(S[i]))
			CapitalCounter++;
	}
	return CapitalCounter;
}



int main()
{
	string S = Readstring();
	cout << "\nstring length: " <<S.length()<<endl ;
	cout <<"\nCapital Letters count : "<< CountCapitalLetters(S) << endl;
	cout << "\nSmall Letters count : " << CountSmallLetters(S) << endl;

}
