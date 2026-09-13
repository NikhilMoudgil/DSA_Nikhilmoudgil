//Array Tansformation
#include <iostream>
using namespace std;

void transposeArr(int arr[4][3], int n, int m)
{
    int tarr[3][4];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        tarr[j][i] = arr[i][j];
       }
       
    }
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
        cout<<tarr[i][j] <<"  ";
       }
       cout<<endl;
    }
}

int main()
{
    int arr[4][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9},
                     {10, 11, 12}};

    transposeArr(arr, 4, 3);

    return 0;
}