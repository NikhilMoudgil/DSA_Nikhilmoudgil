/*Bubble Sort
Idea- large element come to end by swaping with adjacent elements and so on until array sorted
Logic->
[5,3,4,6,8,2] turns(iteration)->
In bubble sort we do n-1 turns
1st turn-> [3,4,5,6,2,8]
2nd turn -> [3,4,5,2,6,8]
.....
5th turn -> [2,3,4,5,6,8]]
pseudo code-> [5,4,1,3,2]
     for(int=0;i<n-1,i++){
     for(int j=0,j<n-i-1,j++){
          if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1])}
       }
     }
Time Complexity -> O(n^2)

*/
// CODE
#include <iostream>
using namespace std;
void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;// For better optimization as if array already sorted ->
        //no swaps occur in 1st turn then skip and optimize tc
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (! isSwap)
        {
           return;
        }
        
    }
    printarr(arr, n);
}
int main()
{
    int arr[] = {5, 3, 7, 6, 1};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    return 0;
}