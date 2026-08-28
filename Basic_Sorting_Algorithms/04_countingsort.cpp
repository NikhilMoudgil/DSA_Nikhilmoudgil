#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void printarr(int *arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void countsort(int *arr, int n)
{
  int minval = INT_MAX, maxval = INT_MIN;
  
  // Find min and max
  for (int i = 0; i < n; i++)
  {
    minval = min(minval, arr[i]);
    maxval = max(maxval, arr[i]); // Fixed: using max()
  }

  // Dynamically size the frequency array based on the actual range
  int range = maxval - minval + 1;
  vector<int> freq(range, 0);

  // 1st step: Count frequencies with an offset
  for (int i = 0; i < n; i++)
  {
    freq[arr[i] - minval]++; // Subtract minval to handle negative numbers safely
  }

  // 2nd Step: Reconstruct the array
  for (int i = 0, j = 0; i < range; i++)
  {
    while (freq[i] > 0)
    {
      arr[j++] = i + minval; // Add minval back to get the original number
      freq[i]--;
    }
  }
  
  printarr(arr, n);
}

int main()
{
  int arr[] = {5, 4, 2, 3, 1, 7, 2, 3, 6};
  int n = sizeof(arr) / sizeof(int);
  countsort(arr, n);
  return 0;
}