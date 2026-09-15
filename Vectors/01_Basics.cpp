/*
Type of the Memory allocation
Static-> Compile time , Dynamic -> Run time
*/
#include <iostream>
using namespace std;

int main()
{
    // int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};// static memory allocation
    // dynamic 1D array
    //Demo
    int size;
    cin >> size;
    int *arr = new int[size];// new used to allocate new memory and need to delete explicitly
    int x =1;
    for (int i = 0; i < size; i++)
    {
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }
    
    return 0;
}
// Memory Leak
//STL -> Standard Template Library -> Of container classes , algorithms and iterators