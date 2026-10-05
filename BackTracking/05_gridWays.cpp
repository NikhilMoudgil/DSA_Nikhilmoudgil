/* Grid Ways 
psudo code->
int ways(int r, int c,int n,int m){
//Base Case 
if(r==n && c==m){
   return 1;
  }
v1 =ways(r,c+1,n,m);
v2 =ways(r+1,c,n,m);
return v1 + v2; 
}

*/
//code
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int ways(int r,int c, int n,int m){
    //Base Case 
    if(r==n-1 && c==m-1){
        return 1;
    }
    if(r>=n || c>=m){
        return 0;
    }
    //right
    int val1 =ways(r,c+1,n,m);
    //down
    int val2 =ways(r+1,c,n,m);
    return val1 + val2; 
}
int main(){
    int n=3,m=3;
    cout<<ways(0,0,n,m)<<endl;
    return 0;
}