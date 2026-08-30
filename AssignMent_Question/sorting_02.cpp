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
void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minidx])
            {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
    printarr(arr, n);
}
int main()
{
    int arr[] = {3, 6, 8, 7, 4, 5, 1, 1, 2, 6, 8, 9, 0, 3, 5, 6, 78, 34, 67, 334, 64, 7, 10};
    int n = sizeof(arr) / sizeof(int);

    selectionsort(arr, n);
    return 0;
}