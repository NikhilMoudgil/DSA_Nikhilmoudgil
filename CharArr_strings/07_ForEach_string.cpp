/*For Each Loop in Strings

*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str  ="Solo Sync!";
    //simple loop
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i]<<"_";
    }
    cout<<"\n";

    //for each
    //syntax for(char ch:str){///}
    for(char ch:str){
        cout<<ch<<",";
    }
    cout<<endl;
    return 0;
}