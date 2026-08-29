/*
Inbuild sort

Ascending Order 
 sort (start , end)

 decending order
*/
#include<iostream>
#include <algorithm>
using namespace std;
void printarr(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}


int main()
{
    int arr[6]={1,2,4,1,2,5};
    sort(arr,arr+6);
    printarr(arr,6);
    return 0;
}