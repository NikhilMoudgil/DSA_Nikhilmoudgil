#include<iostream>
using namespace std;
void towerofhanoi(int n,string src ,string helper ,string dest){
    if(n==1){
        cout<<"Transfer Disk "<<n<<" From "<<src<< " to "<<dest<<endl;
    }
    towerofhanoi(n-1,src,dest,helper);
    cout<<"Transfer Disk "<< n <<" from "<< src <<" to "<< helper<<endl;
    towerofhanoi(n-1,helper,src,dest);
    cout<<"Transfer Disk "<< n <<" from "<< helper <<" to "<< dest<<endl;
}
int main()
{    
    int n=4;
    towerofhanoi(4,"A","B","C");
    return 0;
}