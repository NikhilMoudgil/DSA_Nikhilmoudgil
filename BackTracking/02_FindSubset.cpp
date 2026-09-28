/* Subset of strings
for string with n characters have total subsets number =  2^n;
// Approach->

Pseudo code
f(string str, string subset){
   if(str..size()==0){
    cout<<""
   }

  f(str.substring(1,n-1),subset+ch)/yes

  f(str.ssubstring(1,n-1),subset)//np
}


*/
#include <iostream>
using namespace std;
void printSubs(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << "\n";
        return;
    }
    char ch = str[0];
    printSubs(str.substr(1,str.size()-1),subset+ch);//yes
    printSubs(str.substr(1,str.size()-1),subset);//no
}

int main()
{
    string str = "abc";
    string subset = "";
    printSubs(str,subset);
    return 0;
}