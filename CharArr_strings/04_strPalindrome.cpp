// Palindrome -> Reverse of str is similar to str
#include <iostream>
#include <string.h>
using namespace std;
bool validPal(char str[], int n)
{
    int st = 0, end = n - 1;
    while (st < end)
    {
        if (str[st] != str[end])
        {
            cout << "Not valid palindrome" << endl;
            return false;
        }
        st++;
        end--;
    }
    cout << "valid palindrome" << endl;
    return true;
}

int main()
{
    char str[] = "raccar";
    validPal(str, strlen(str));
    return 0;
}