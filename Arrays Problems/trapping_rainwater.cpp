// we need to find the amount of the water trapped between the bars 
// given the height of bar array and width  is fix
/* logic->
1. bar needs a valley to trap the  water ,ie. larger on both side and smaller on the- 
middle
2.we need atleast of minimum array size n=3 to trap the water(n>2)
3. In case of three bars water trapped  only when there is larger on both side and smaller on the-
middle and  space called pocket  and  
4. amount of water on middle bar's pocket  conclude by  the differance between -
height of smaller from side bars and height of pocket bar 
5.since witdh is 1 so we just use height for volume
6.minimum of left largest and right largest gives the trapped water amount

Code Logic 
From array given we create two aauxiliary arrays which are->
a. left maximum -> initialized -infinity
  for ith 
  leftmax[i]= max(leftmax[i-1], height[i-1])

b. right maximum-> initialized + infinity
 for  ith 
 rightmax[i]= max(rightmax[i+1], height[i+1])
*/
// extra arrays used in logic are called auxilary arrays
#include<iostream>
#include<climits>
using namespace std;
int trapwater(int*heights, int n){
    int leftMax[20000];//as per  the leetcode problem
    int rightMax[20000];
    //rightMax[n-1]=INT_MIN;because in cpp it will give  a +ve value instead of -infinity
    //leftMax[0]=INT_MIN;
    rightMax[n-1]= heights[n-1];
    leftMax[0]= heights[0];

    for (int i = 1; i < n; i++)
    {
       leftMax[i]=max(leftMax[i-1],heights[i-1]);
    }
    for (int i = n-2; i>=0; i--)
    {
        rightMax[i]=max(rightMax[i+1],heights[i+1]);
    }
    int watertrapped=0;
    for (int i = 1; i < n; i++)
    {
       int currwater = min(leftMax[i],rightMax[i])-heights[i];
       if(currwater>0){
        watertrapped+=currwater;
       }
    }
    cout<<"Water Trapped= "<< watertrapped;
    return watertrapped;
}

int main()
{
    int heights[7] = {7,6,5,4,3,2,1};
    int n = sizeof(heights) / sizeof(int);
    trapwater(heights,n);
    return 0;
}