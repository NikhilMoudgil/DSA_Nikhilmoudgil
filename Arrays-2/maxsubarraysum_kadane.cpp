/*
  Logic of Kadane's algorithm
  for(i=0 to n)
  currsum+=arr[i]
  maxsum=max(currsum,currsum)
  if(maxsum<0){
   cursum=0;  
  }
*/
#include <iostream>
#include<climits>
using namespace std;
void maxsubarrsum_kadane(int *arr, int n)
{
    int maxsum = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
      currsum+=arr[i];
      maxsum=max(currsum,maxsum);
      if (currsum<0)
      {
        currsum=0;
      }
      
    }
    cout<<"Maximum Subarray sum ="<< maxsum<<endl;

}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxsubarrsum_kadane(arr, n);
    return 0;
}