/*Diagonal Su, problem in 2D array

Logic
| 1 2 3 |
| 4 5 6 |
| 7 8 9 |

Primary Diagonal-> 1,5,9
Secondry Diagonal -> 3,5,7
IN Case when n= odd then
total Sum of PD +Sum Of SD - Common when both condition followed by common
 for finding PD -> where i=j

 for finding SD -> for (i,j) j=n-i-1


*/
#include <iostream>
using namespace std;
void diagonalSum(int arr[4][4], int n)
{
    int sum = 0;
    /* time complexity with this loop is n^2
    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < n; j++)
        { // col
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }*/
   //with time complexity 0(n)
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];//pd
        if(i !=n-i-1){
            sum += arr[i][i];
        }
    }
    
    cout << "Diagonal Sum =" << sum << endl;
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    diagonalSum(arr, 4);
    return 0;
}