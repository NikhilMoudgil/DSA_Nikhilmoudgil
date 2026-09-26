/* Divide and Conquer
Merge Sort (n log n)
//logic
1.Divide - divide the array into 2 parts
  a. found mid -> (starting index- ending index)/2
  b. we have two halfs and will sort them separately
2.   mergesort(left) and mergesort(right)
do so until we reach all single elements -. base case

3. merge() -> we combine or merge sorted divided small arrays
   a. create a temporary array
   b create two iterators
    i= si
    j=mid+1
    because
    arr(si,ei)
    mid=(si+ei)/2 so
    left=(si,mid) and right(mid+1,end)
 whoever is small app in temporary array and update iterators

 4. copy temporary into the original array
//sudo code->

// recursion code
ms(arr.si,ei){

   if(si>=ei){
     return
   }

  mid=(si+ei)/2
  ms(arr,si,mid)//left
  ms(arr,mid+1,ei)/right

  merge(arr,si,ei,mid)
}
  //merging sorted array
  merge(arr,si,ei,mid){
   vector<int>
   i=si
   j=mid+1

   while(i<=mid && j<=ei){
      arr[i] ,arr[j] -----> vector
   }
  }
copy vector to original array

*/
#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    // vector-> original
    for (int idx = si, x = 0; idx <=ei; idx++,x++)
    {
        arr[idx] = temp[x];
    }
}

void mergeSort(int arr[], int si, int ei)
{
    // base caSE
    if (si >= ei)
    {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);     // lefthalf
    mergeSort(arr, mid + 1, ei); // righthalf
    // Conquer
    merge(arr, si,mid, ei);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {6, 3, 7, 4, 2, 4};
    int n =6;

    mergeSort(arr, 0, n-1);
    printarr(arr,n);
    return 0;
}