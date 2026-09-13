// reverse string
// while(st<end){ swap(word[st],word[end])}
// st++,end--
// tc-O(n)
#include <iostream>
#include<string.h>
using namespace std;
void reverseArr(char word[], int n)
{  
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
int main()
{
    char word[] = "APPLE" ;
    reverseArr(word, strlen(word));
    cout << word << endl;
    return 0;
}