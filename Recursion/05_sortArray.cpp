#include <iostream>
using namespace std;
bool arraysorted(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return arraysorted(arr, n, i + 1);
}
int main()
{
    int arr[] = {2, 4, 5, 9, 8};
    cout << arraysorted(arr, 5, 0);
    return 0;
}