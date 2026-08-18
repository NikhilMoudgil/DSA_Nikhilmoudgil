#include <iostream>
using namespace std;
void maxsubarrsum_bf(int* arr, int n){
    int maxsum=INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];

            }
            cout<<currsum<<",";
            maxsum=max(maxsum,currsum); //max is used to find maximum between 2
        }
        cout<<endl;
        
    }
    cout<<"Maximum subarray sum = "<<maxsum<<endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);


    maxsubarrsum_bf(arr,n);
    return 0;
}