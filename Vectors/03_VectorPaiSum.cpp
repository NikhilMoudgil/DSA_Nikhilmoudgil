/* Find if any pair in sorted array has target sum;
Two pointer approach
make 2  pointer st ,end
while(st<end){
if(currsum = tar){
return true;
}
else if(currsum> tar){
    end--;
}else{
   st++;
}
}
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> vec, int target)
{
    int st = 0, end = vec.size() - 1;
    int currsum = 0;
    vector<int> ans;
    while (st < end)
    {
        currsum = vec[st] + vec[end];
        if (currsum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (currsum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
}
int main()
{
    vector<int> vec = {1, 3, 4, 5, 15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}