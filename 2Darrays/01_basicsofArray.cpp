// 2D arrays
// we visualize 2d arrays as Rows and Columns  to access a element as
// arr[4][5] [4]-> Row Number , [5]-?column

/*Psudo code 
We will access and get array with loops
for(i=0 to n-1)// for rows{
  for(j=0 to n-1)// for columns
}
 // 2D arrays in memory
 let matrix 
 | 1 2 |
 | 3 4 |
 Row Major
 [1 2 3 4]
 Column Major
 [1 3 2 4]
*/
#include <iostream>
using namespace std;

int main()
{
    int students[3][3] = {{100, 100, 100}, {87, 86, 99}, {79, 98, 99}}; // Initialization and Defination
    cout << students[1][0] << endl;

    // Printing  2D array using loops

    // n*m n-> rows , m-> rows

    int arr[3][5];
    int n=2, m=2;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        cin>>arr[i][j];
       }
       
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        cout<<arr[i][j] <<"  ";
       }
       cout<<endl;
    }
    return 0;
 
}
