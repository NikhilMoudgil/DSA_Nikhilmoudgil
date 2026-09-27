/*
We use modified binary search
1. find mid -> si+(ei-si)/2
2. if(arr[mid]==target){
  return mid;
}else
3.
if(arr[si]<mid) {
  l1
}else{
 l2
}
 Mid can be on l1 -> case1
 mid can be on l1 -> case 2
 case 1 will have further 2 cases ->
    case a: arr[si]<=tar<=arr[mid]
    //left f(si,mid-1)
    case b :
    //right f(mid+1,ei )
case 2 :
    case c: arr[mid]<=tar <=arr[ei]
   right f(mid+1 ,ei)
   case d :
   left f(si ,mid-1)
//Psudo Code
search(arr,si,ei,tar){
 //base case
 if(si>ei){
   return -1//target not exist
 }
 mid =si+(ei-si)/2
 if(arr[mid]==tar){
 return mid
 }
 if(arr[si]<=arr[mid]){ //l1
   if(arr[si]<=tar<=arr[mid]){ //case a
     search(si,mid-1)
   }else{ //case b
    search(mid+1,ei)
   }
  }else {// l2
    if(arr[si]<=tar<=arr[mid]){ //case c
    search(mid+1,ei)
     }else{
       search(si,mid-1)
     }
  }


}

*/
#include <iostream>
using namespace std;
int search(int arr[], int si, int ei, int target)
{
    // base case
    if (si > ei)
    {
        return -1;
    }

    int mid = si + (ei - si) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    if (arr[si] <= arr[mid])
    { // l1
        if (arr[si] <= target && target <= arr[mid])
        { // case a
            return search(arr, si, mid - 1, target);
        }
        else
        { // case b
            return search(arr, mid + 1, ei, target);
        }
    }
    else
    { // L2
        if (arr[si] <= target && target <= arr[mid])
        { // case c
            return search(arr, mid + 1, ei, target);
        }
        else
        {
            return search(arr, si, mid - 1, target);
        }
    }
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int target = 2;
    cout << "Value Found At Index  " << search(arr, 0, n - 1, target);
    return 0;
}