class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int leftMax[20000];
        int rightMax[20000];

        rightMax[n-1]=height[n-1];
        leftMax[0]=height[0];

        for(int i=1;i<n;i++){
            leftMax[i]=max(leftMax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i]);
        }
        int waterTrapped=0;
        for(int i=0;i<n;i++){
            int currwater=min(leftMax[i],rightMax[i])-height[i];
            waterTrapped+=currwater;
        }return waterTrapped;
    }
    
};