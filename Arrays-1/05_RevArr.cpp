// reverse an array using free space
/* LOGIC=>
We use additional array so as to store elements using reverse loop and overwrite 
-original array 
For loops if i= 0 then relation if j =n-i-1
*/
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,6,2,9,5,8};
     int n =sizeof(arr)/sizeof(int);

     int copyArr[n];

     for (int i = 0; i < n; i++){
        int j =n-i-1;
        copyArr[i]=arr[j];
     }
     for (int i = 0; i < n; i++){
        int j=n-i-1;
        arr[i]=copyArr[i];
     }
      cout<<"Reversed Array Using the Extra Space"<<endl;
      for (int i = 0; i < n; i++){
       cout<<arr[i]<<endl;
    }
    
//Reverse array without using another array O(1)SC
/*Two Pointer approach 
Swap 1st and last Element and shrink to middle of arr
We use Start POinter or End pointers or exactly indexs

LOGIC=>
start=0, end=n-1
while(start<end){
swap(st,end);
start++;
end--;
}
when st==end then stop
*/

int st=0;
int end=n-1;

while (st<end)
{
   int temp =arr[st];
   arr[st]=arr[end];
   arr[end]=temp;
  st++;
  end--;
}
cout<<"Reversed Array without Extra Space"<<endl;
      for (int i = 0; i < n; i++){
       cout<<arr[i]<<endl;
    }

}
