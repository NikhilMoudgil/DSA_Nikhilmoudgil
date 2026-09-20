/*Remove Duplicate from the string
1. We will do it using recursion
we wil loop and get element when its distint store it in the string answer

We will do solution for the first ith term and the call recursively-> work
removeduplicate(str,ans,i,map[])// without will get elements from the last
bool map[26]-> 'a'- 'z'-> initialze false
At every iteration we will check is in map there is true or false ,
if  i available then do it true andadd to ans
Recursive function ->

if map[i]-.
true-> f(str,ans,i+1,map)
false-> f/(str, ans+str[i],i+1,map) and in map map[i]=true;

baseCase -> if(i==n){
   cout<<ans
   };

*/
#include <iostream>
using namespace std;
/*
void removeDuplicate(string str, string ans, int i, int map[26])
{
    if (i == str.size())
    {
        cout << "ans: " << ans << endl;
        return;
    }
    int mapIdx = (int)(str[i]- 'a');
    if (map[mapIdx])
    { // duplicate
        removeDuplicate(str, ans , i + 1, map);
    }
    else
    { // not duplicate;
        map[mapIdx]=true;
        removeDuplicate(str, ans + str[i], i + 1, map);
    }
}*/

int main()
{
    string str = "aaabbbcddeeffgghhiijj";
    string ans = "";
    int map[26] = {false};
    removeDuplicate(str, ans, 0, map);
    return 0;
}