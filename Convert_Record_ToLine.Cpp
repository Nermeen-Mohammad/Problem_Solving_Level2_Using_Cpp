#include <iostream>
#include<string>
using namespace std;

struct ClientData
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
	
ClientData ReadNewClient()
{
	ClientData Client;
	cout << "Please enter client data:\n\n";

	cout << "Enter Account Number: ";
	getline(cin, Client.AccountNumber);

	cout << "Enter PinCode: ";
	getline(cin, Client.PinCode);

	cout << "Enter the name: ";
	getline(cin, Client.Name);

	cout << "Enter the phone number: ";
	getline(cin, Client.Phone);

	cout << "Enter the AccountBalance: ";
	cin>> Client.AccountBalance;

	return Client;
}

string ConvertRecordToLine(ClientData Client, string seperator = "#//#")
{
	string Line = "";
	Line += Client.AccountNumber + seperator;
	Line += Client.PinCode + seperator;
	Line += Client.Name + seperator;
	Line += Client.Phone + seperator;
	Line += to_string(Client.AccountBalance) + seperator;
	return Line;
}

int main()
{
	ClientData Client;
	Client = ReadNewClient();

	cout << "\n\nClient record for saving is : \n";
	cout << ConvertRecordToLine(Client);
	
		system("pause>0");
	return 0;

}
