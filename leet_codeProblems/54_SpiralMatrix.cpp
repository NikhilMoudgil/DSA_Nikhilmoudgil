class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if (matrix.empty()) return ans; 
        int n = matrix.size();       // Number of rows
        int m = matrix[0].size();    //number of columns
        int srow=0, scol=0;
        int erow=n-1, ecol=m-1;
        while(srow<=erow && scol<=ecol){
        //top
        for(int j=scol;j<=ecol;j++){
            ans.push_back(matrix[srow][j]);
        }
        //right
        for(int i=srow+1;i<=erow;i++){
           ans.push_back(matrix[i][ecol]);
        }
        //bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow ==erow){
                break;
             }
           ans.push_back(matrix[erow][j]);
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol ==ecol){
                break;
             }
          ans.push_back(matrix[i][scol]);
        }
        srow++;
        scol++;
        erow--;
        ecol--;

        }
      return ans;
    }
};