// Slightly Optimized brute force  approach
// TC -> O(n^2)
#include <iostream>
#include<climits>
using namespace std;
void maxsubarrsum_bf(int *arr, int n)
{
    int maxsum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currsum = 0;
        for (int end = start; end < n; end++)
        {
            currsum += arr[end];
            maxsum = max(maxsum, currsum);
        }

    }
        cout << "Maximum subarray sum = " << maxsum << endl;

}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxsubarrsum_bf(arr, n);
    return 0;
}
