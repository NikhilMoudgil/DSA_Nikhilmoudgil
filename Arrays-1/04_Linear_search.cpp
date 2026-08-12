#include<iostream>
using namespace std;

int linear_Search(int*arr ,int n , int key){
    for (int i = 0; i < n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={3,54,2,67,8,6,34,4,32,1};
    int n= sizeof(arr)/sizeof(int);
    cout<<"Found your value at index:" << linear_Search(arr,n,8)<<endl;
    return 0;
}
//Time Complexity=> Relation b/w array size and number of operations
/*if arr size = 5 then ops ~= 5+constant
arr size = 1000 then ops ~= 1000+constant
arr size = 10000 then ops ~= 10000+constant
 +> it gives a linear graph  thus this Tc is called O(n)(linear Time Complexity)

*/