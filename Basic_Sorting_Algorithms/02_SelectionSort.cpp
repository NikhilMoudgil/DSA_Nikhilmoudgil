/*Selection Sort
Idea -> Pick the smallest and  put in begginning
[5,4,1,3,2]
1 Iteration [5,4,1,3,2] ->
Swap 1 with 5 -> [1,4,5,3,2]= [1]-> Sorted
, [4,5,3,2]-> Unsorted
.... so on
// Psudo Code ->
for(i=0;i<n-1,i++ ){
     minidx =i
for(j=i+1;j<n;j++ ){
    if(arr[j]< arr[minidx]){
      minidx=j;
     }
    }
 swap(arr[i], arr[minidx])
}

*/
#include<iostream>
using namespace std;
void printarr(int*arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    
}
 void selectionSort(int*arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        int minidx=i;
        for (int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    printarr(arr,n);
    
 }
int main()
{
    int arr[]={5,4,2,3,1};
    int n= sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    return 0;
}