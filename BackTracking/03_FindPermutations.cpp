/*FInd the permutations of a given string
n elements -> possible arrangerments are n!
for n permutation =n!;


*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void permutations(string str, string ans)
{
    int n= str.size();

if(n==0){
    cout<< ans<<"\n";
    return;
}
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        string nextstr= str.substr(0,i)+ str.substr(i+1,n-i-1);
        permutations(nextstr,ans+ch);
    }
}

int main()
{
    string str = "abc";
    string ans = "";
    permutations(str,ans);
    return 0;
}