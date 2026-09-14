#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string str = "Solo Sync!";
    cout << str.length() << endl;     // length
    cout << str.at(2) << endl;        // value at index
    cout << str.substr(4, 9) << endl; // give the substring
    cout << str.find("Solo",/*Minimum array*/) << endl; // search for word / garbage value if cant find word
    return 0;
}