/*cstring functions , this is a header file

*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100] = "NikhilBuilds";
    char str2[100] = "ZiNikhil";
    //strcpy(str1, str2); // copy string from src to des
    cout << str1 << endl;
    strcat(str1, str2); // concatinate src with dedination
    cout << str1 << endl;
    cout << strcmp(str1, str2); // compares 2 strings based on the values(-ve,0,+ve)

    return 0;
}