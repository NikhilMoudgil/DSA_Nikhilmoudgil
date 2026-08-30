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
void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
       bool isSwap= false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap=true;
            }
        }
        if(! isSwap){
            break;// it will allow us to print common elements
        }
    }
      printarr(arr, n);
}

    int main()
    {
        int arr[] = {3, 6, 8, 7, 4, 5, 1,1,2,6,8,9,0,3,5,6,78,34,67,334,64,7,10};
        int n= sizeof(arr)/sizeof(int);

        bubblesort(arr, n);
        return 0;
    }