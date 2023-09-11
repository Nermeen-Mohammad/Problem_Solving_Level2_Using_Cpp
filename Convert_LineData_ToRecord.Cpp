#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct sClient{  
    string AccountNumber; 
    string PinCode;
    string Name;
    string Phone; 
    double AccountBalance; 
};

vector<string> SplitString(string stLine, string delim)
{
    vector <string> v;
    short pos = 0;
    string words ;

    while ((pos = stLine.find(delim)) != std::string::npos)
    {
        words = stLine.substr(0, pos);
        if (stLine != "")
        {
            v.push_back(words);
        }
        stLine.erase(0, pos + delim.length());
    }
    if (stLine != "")
    {
        v.push_back(stLine);
    }
    
    return v;
}

sClient ConvertLinetoRecord(string Line, string seperator = "#//#")
{
    vector <string> v;
    v = SplitString(Line, seperator);
    sClient client;

    client.AccountNumber = v[0];
    client.PinCode = v[1];
    client.Name = v[2];
    client.Phone = v[3];
    client.AccountBalance = stod(v[4]);

    return client;
}

void Print(sClient client)
{
    
    cout << "\n\nThe following is the extracted client record:\n";  
    cout << "\nAccout Number: " << client.AccountNumber; 
    cout << "\nPin Code     : " << client.PinCode;   
    cout << "\nName         : " << client.Name;    
    cout << "\nPhone        : " << client.Phone;   
    cout << "\nAccount Balance: " << client.AccountBalance;
}

int main()
{
    string stLine = "A150#//#1234#//#Nermeen Almomani#//#079999#//#5270.000000";
    cout << "Line record is: " << stLine << endl;

    sClient client = ConvertLinetoRecord(stLine);
    Print(client);

    system("pause>0");
    return 0;
}

