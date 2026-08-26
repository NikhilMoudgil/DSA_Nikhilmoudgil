/*Insertion Sort->
Idea-> Pick an element from unsorted part and place it correctly in sorted array

logic->
unsorted array-> [5,4,1,3,2]
we make a temporary variable called current
and imagine two parts of array-> sorted and unsorted

psudo code->
for(int i=1;i<n;i++){
   curr= arr[i];
   prev=i-1
   while(pre>=0&& ar[prev]>>arr){
      swap (arr[prev],arr[prev+1]);
      prev--;
   }
      arr[prev-1] = curr;
}
*/
#include<iostream>
#include<utility>
using namespace std;
void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while ( prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
    printarr(arr, n);
}
int main()
{
    int arr[] = {5, 4, 2, 3, 1};
    int n = sizeof(arr) / sizeof(n);
    insertionSort(arr, n);
    return 0;
}