/*Search in Sorted Arrays
1.BruteForce
TC-> o(n*m)
2.Row/Col BS
tc= o(n*log m)
3.staircase search
cells special property
psedo code ->
'st=> mat[0][m-1]
while(r<n&& c>=0){
  st =key // found
  st<key down -> row++
  st>key left -> col--
}




// Search using Brute force
void bfSearch(int arr[][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Key found at index: (" << i << ", " << j << ")" << endl;
                break;
            }
        }
    }
    cout << "key Found " << endl;
}
// Search Using Row wise binary Search
// tc= o(n*log n)
void bsSearch(int arr[][4], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        int st = 0, end = n - 1;
        while (st <= end)
        {
            int mid = (st + end) / 2;
            if (arr[i][mid] == key)
            {
                cout << "Key found at index: (" << i << ", " << mid << ")" << endl;
                return;
            }
            else if (arr[i][mid] < key)
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
    }
    cout << "Key not found" << endl;
}*/
// StairCase Search
#include <iostream>
using namespace std;

bool staircaseSearch(int arr[4][4], int n,int m, int key)
{
   int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "Found at cell  " << i << "," << j << endl;
            return true;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << " key not Found \n";
    return false;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    staircaseSearch(arr, 4, 4, 13);

    return 0;
}