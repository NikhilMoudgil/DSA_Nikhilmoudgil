// subarray is continuous part of an array
//  in subsequence there can part of an array in order but no continous

/*logic->
  for number of subarrys an array of size n can have is as
  n= n*(n+1)/2
   Pseudo 5 code ->
   for
*/
#include <iostream>
using namespace std;

int printsubarr(int *arr, int n)
{
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      for(int i=start;i<=end;i++){
           cout<<arr[i];
      }
      cout<<",";
    }
    cout<<endl;
  }
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;


  printsubarr(arr,n);
}