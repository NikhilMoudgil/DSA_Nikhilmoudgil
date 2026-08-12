//Arrays are Linear Data structure
// Collection of Same type of elements stored in contiguous memory locations
// IN array we assigh elements and we can access elements via index
// arrays are no dynamically typed
#include<iostream>
using namespace std;

int main(){
    int marksA[50];// Declaration of array 1st method=> only size 
    int marksB[10]= {21,43,54};// Declaration  and initialization of array 2nd method=> size and elements
    int marksC[]= {21,43,54};// Declaration of array 2nd method=> Only elements

    cout<< marksA[0]<<endl;// It will give a garbage value
    cout<< marksB[2]<<endl;// It will give the value 
    // we can get size of array
     cout<< sizeof(marksA) <<endl;// It wil give the number of bytes occupied by it
     cout<< sizeof(marksA)/sizeof(int)<<endl; // It will give the actual size of array
 
    
     // Accessing/printing the values of array using for loop 
     char superheroes[]={"IronMan""Thor""Captain America""DeadPool""SpiderMan"};
     int arrSize =sizeof(superheroes)/sizeof(char);
     for (int i = 0;i<arrSize;i++)
     {
        cout<< superheroes[i];
     }
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
     int arrSize =sizeof(arr)/sizeof(int);
    
      for (int i = 0;i<arrSize;i++)
     {
        cout<< arr[i]<< "  ";
     }
     cout<<endl;

     // getting array value from user
     int arr2[5];
     int arr2Size =sizeof(arr2)/sizeof(int);
     for (int i = 0;i<arr2Size;i++)
     {
        cin>> arr2[i];
     }
     for (int i = 0;i<arr2Size;i++)
     {
        cout<<arr2[i]<<"  ";
     }
     cout<<endl;

     // we can get array size of array from user
     int arr3size;
     cout<< "Enter the size of the Array:";
     cin>>arr3size;
     int arr3[arr3size];
     return 0;
}
