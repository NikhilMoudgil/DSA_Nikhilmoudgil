// For S\\ma,csorted Array
/*
    find mid ->
    mid= (st+end)/2

    in loop{
    (arr[mid]==key)
    return mid;
     if arr[mid]<key)
     2nd  half
     start=mid+1
     if arr[mid]>key
     1st half
     end = mid-1
   }

   ** pseudo code
   int st=0 ,end=n-1;
   while(st<=end){
     mid=(st+end)/2
     if(arr[mid]==key){
       return mid
     }else if(arr[mid]<key){
      st=mid+1
     }else {
     end=mid-1
     }
   }
     return -1
*/

#include <iostream>
using namespace std;
int binarysearch(int *arr, int n, int key){
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            // 2nd half
            st = mid + 1;
        }
        else
        {
            // first half
            end = mid - 1;
        }
    }
      return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 10, 13, 17, 35};
    int n = sizeof(arr) / sizeof(int);
    cout << binarysearch(arr, n, 13);
    return 0;
}

//Binary Search  Time  complexity 
//tc= relation between input size and number of operations

//tc of binary search = O(log n)

/* ## Array Pointer 
arr name always points  to the 0th index of array in cpp we cannot
change the  arr pointer or override it 

*/