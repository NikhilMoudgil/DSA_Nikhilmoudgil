//when a function calls itself is called recursive function and process is called recursion
/* main func-> rec func -> rec func ->rec func ->rec func -> ...
 end point (base case ) and then return,
Thus we can that recursion is method of solving computational problems where solultion 
depends on the solution to smaller instances of the same  problem

f(n)= n* f(n-1) -> recurrence relation 9

 int fatorial(int n){
 if(n==0){// base case
  return 1;
  }
  return  n*factorial(n-1);
  
 }
*/
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){// base case
  return 1;
  }
    return n*fact(n-1);
}
int main()
{
    cout<<fact(5);
    return 0;
}