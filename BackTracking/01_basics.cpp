/*// Backtracking
In recursion when we retrace something backwords which is called backtracking
Types of Backtracking ->
1 Decision -> Yes/NO
2 Optimization -> Best one
3 Enumeration : Count
// BackTracking in Arrays
arr(n=5)
arr[i]=i+1;
{1,2,3,4,5}


*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void changearr(int arr[], int n, int i)
{
    if (i == n)
    {
        printArr(arr, n);
        return;
    }
    arr[i] = i + 1;
    changearr(arr, n, i + 1);
    arr[i] -= 2; // backtrack
}

int main()
{
    int arr[5] = {0};
    int n = 5;
    changearr(arr, n, 0);
    printArr(arr,n);

    return 0;
}