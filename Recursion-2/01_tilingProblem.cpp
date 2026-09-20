/* Tiling Problem 
We will  solve this problem using recursion. The problem is to f
ind the number of ways to tile a 2 x n board using 2 x 1 tiles.
 //Here we will fill our floor with tiles and so on the size decrease on adding
  tiles and next recursion will be called on the remaining size of the floor.
  * at each level we have two choices either to place the tile vertically or horizontally.

  //There are two ways to place the first tile:
  1. Place the tile vertically. In this case, we are left with a 2 x (n-1) board to tile. So the number of ways to tile the remaining board is f(n-1).
  2. Place the tile horizontally. In this case, we are left with a 2 x (n-2) board to tile. So the number of ways to tile the remaining board is f(n-2).
  
   This can be expressed as:f(n) = f(n-1) + f(n-2)-> recurance relation

 At each level we have two choices either to place the tile vertically or horizontally.and 
 recursive call for the remaining size of the floor. The base case is when n=0 or n=1, 
 in both cases there is only one way to tile the board.
 logic->
 tp(int n){
 //vertical
    tp(n-1)-> ans1
 // horizontal 
    tp(n-2)-> asn2
    final= ans1+ans2
 }
    for n=0 -> 2*0 = ways 0
    for n=1 -> 2*1 = ways 1
*/
#include<iostream>
using namespace std;

int tilingProblem(int n){//2Xn
//Base Case -> 
if(n==0||n==1){
    return 1;
   } 
    /*
    //vertical
    int ans1=  tilingProblem(n-1);
    //horizontal 
    int ans2=tilingProblem(n-2);
    //final answer
    return ans1+ans2;*/
    return tilingProblem(n-1)+tilingProblem(n-2);

}

int main()
{
    int n=4;
    cout<<tilingProblem(n)<<endl;   
    return 0;
}