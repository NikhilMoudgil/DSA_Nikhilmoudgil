// COnvert 1-D array to 2-d array
#include <iostream>
using namespace std;

// Updated to use m for rows and n for columns
void transformArr(int *arr, int m, int n)
{
    // The outer loop handles the rows (m)
    for (int i = 0; i < m; i++) 
    {
        // The inner loop handles the columns (n)
        for (int j = 0; j < n; j++) 
        {
            // Maps the 2D coordinate back to the 1D array index
            cout << arr[i * n + j] << " ";
        }
        cout << endl; // Move to the next line after a row is complete
    }
}

int main()
{
    // Test Case 1: 1 row, 3 columns
    int arr1[3] = {1, 2, 3};
    int m1 = 1, n1 = 3;
    
    cout << "Test Case 1 (1x3):" << endl;
    transformArr(arr1, m1, n1);
    
    cout << "\n------------------\n" << endl;

    // Test Case 2: 2 rows, 2 columns (from your original logic)
    int arr2[4] = {1, 2, 3, 4};
    int m2 = 2, n2 = 2;
    
    cout << "Test Case 2 (2x2):" << endl;
    transformArr(arr2, m2, n2);

    return 0;
}