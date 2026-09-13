#include <iostream>
using namespace std;

int main()
{
    /*char ch1 = 'F';
    char ch2 = '@';
    // ascii value of character/posiotn of character 
    int pos = ch1 - 'A';
    cout << pos << endl;

    //Character Array/string
    char arr[5] ={'c','o','d','e','\0'};// this is character array and changable
    //strings explicitly terminated by null character'\0'
    // in  simple array , array name returns index of the first element 
    //whereas in char array/string we get the value by array name
    cout<< arr<<endl;
    char str[] ="Nikhil Moudgil"; //fixed
    
   /* // Creation 
    char work[]="code";
    cout<<work<<endl;
    char work2[5]="code"; // 5 as there is null character 
    //but not count in stelen()
    cout<<work2<<endl;
    */
   
    //input 
    char word[15];
    cout<<"Enter ";
    //cin>>word;// ignore after whitespaces
    // to get white line after string  -> getline
    cin.getline(word,15,' ');// first arg-> string name , size ,delimiter
    cout<<"Your String Was :"<<word<<endl;

    

    return 0;

}