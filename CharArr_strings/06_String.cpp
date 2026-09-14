// OOP in Strig -> Class , Object , Member Functions & Properties
// c++ has a string class and need to include  header file
//  string acts as type and class of the variable
/*STL-> Standard Template Library-> includes header files
*Strings Have Useful member function
*Are dynamic can change the size(character array cannot be change the memory size )
*Supports Operators (+,==,>,<)
* Stored contiguosly in memory

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";
    cout << str << endl;
    str = "Nikhil";
    cout << str << endl;
    getline(cin,str);// used so that we can get the sentences after spaces
     cout << str << endl;
    return 0;
}