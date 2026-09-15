/*
//Anagram -> Use same characters but have different arrangement;

//linear tc approach

we use count array for this
1// we use the length of two ;
2 store count of chars
 count [str1[i]-'a']++
 3. traverse the 2nd str
 // if the count of charcter is zero and in


*/
#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        cout << "Not Valid";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i <=26; i++)
    {
        if (count[i]!== 0)
        {
            return false;
        }
    }
    cout << "Valid";
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    isAnagram(s, t);
    return 0;
}