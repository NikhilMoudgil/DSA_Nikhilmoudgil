/*Arrays are passed by referance=> 
It  means we can access a value using address/ pointer 
void printarr(int arr[]){..} and void printarr(int*arr){..}
Both of above are true
in c++ arrayname are by default pointers
*/
#include <iostream>
using namespace std;
//  In given function the  array is called by referance 
void func(int arr[]){
  arr[0]=1000;
};
/*void printArr(int arr[]){
    int n= sizeof(arr)/sizeof(int);
    for (int i = 0; i<n ;i++)
     {
        cout<<arr[i]<<" , ";
     }
     cout<<endl;
}*/
int main(){
    int a = 5;
    int*ptr = &a;// it gives the address of a 
    cout<<ptr<<endl;
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    cout<<arr<<endl;// name of array is pointer which points to 0th index of arr
    cout<<*arr<<endl;// it will give the value stored at 0th index of the array
 func(arr);// pssing array name ids equal to passing a pointer
 cout<< arr[0]<<endl;
  //printArr(arr);

 return 0;
} 