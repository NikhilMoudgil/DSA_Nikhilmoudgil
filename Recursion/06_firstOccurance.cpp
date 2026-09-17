#include<iostream>
#include<vector>
using namespace std;
int firstOccur(vector<int>arr, int i , int target){
    if(arr[i]==target){
        return i;
    }
    return firstOccur(arr,i+1,target);
}
int main()
{
    vector<int> arr ={1,2,3,3,4,3,5,6};
    cout<< "Index of First Occurance Of target =" <<firstOccur(arr,0,6)<<endl;
    return 0;
}