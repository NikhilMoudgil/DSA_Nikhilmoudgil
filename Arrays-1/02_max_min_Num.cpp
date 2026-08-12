// Find the maximum and minimum number of array
/*Logic of the Problem=>
We will traverse the whole array and when it gets
 if(arr[i]>max){
  max=arr[i];
}
*/
#include <iostream>
using namespace std;
int main(){
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Largest among array is:" << max << endl;
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest among array is:" << min << endl;
    
    return 0;
}
