/*Vectors->  They can resize dynamically at runtime
vector<int> vec1;
vector<int> vec2(5,-1)
//Implementation in Memory
size-> number of elements
capacity-> max.  number of elements it can hold when we try to add
more capacity than another location double size is used as vector
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    cout << vec1.size() << endl;
    vector<int> vec3 = {10, 0};
    cout << vec3.size() << endl;
    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout <<"Size: "<< vec2.size() << endl;
    cout << "Capacity: "<< vec2.capacity() << endl;
    vec2.push_back(4);
     cout <<"Size: "<< vec2.size() << endl;
    cout << "Capacity: "<< vec2.capacity() << endl;// capacity doubled
    return 0;
}