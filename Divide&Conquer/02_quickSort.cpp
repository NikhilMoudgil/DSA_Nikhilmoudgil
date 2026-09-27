/*Its time complexity is constant
Space complesity -0(n)
Time Complexity - avg- 0(n log n)
                  worst 0(n^2)
// It works on pivot and partition Approach
//LOGIC
1. we take a pivot index  -> as ending index
2. partition on basis of pivot
3. Recursively call QS for left and right part
//Psudo Code->
qs(arr,si,ei){
  pivotidx =partition(arr,si,ei)
  //left
  qs(si,pi-1)
   qs(pi+1,ei)
}
   Partition Step->
   we take two iterators ->
   part(arr,si,ei){
   i=si-1;

  for(j=si;j<ei;j++){
   if(arr[j]<=pivot){
   i++ ;
   swap(ar[i],arr[j])
}
i++
swap(arr[i],arr[ei])
return i;
}
*/

#include <iostream>
using namespace std;
int partition(int arr[], int si, int ei)
{
    int i = si - 1;
    int pivot = arr[ei];

    for (int j = si; j < ei; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}

void qs(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int pivotidx = partition(arr, si, ei);

    // left
    qs(arr, si, pivotidx - 1);
    // right
    qs(arr, pivotidx + 1, ei);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    qs(arr,0,n-1);
    printarr(arr,n);
    return 0;
}