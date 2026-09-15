/*Vectors->  They can resize dynamically at runtime
vector<int> vec1;
vector<int> vec2(5,-1)
//Implementation in Memory
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1;
    cout<<vec1.size()<<endl;
    vector<int> vec2={1,2,3,4,5};
    cout<<vec2.size()<<endl;
    vector<int> vec3={10,0};
    cout<<vec3.size()<<endl;
    return 0;
}