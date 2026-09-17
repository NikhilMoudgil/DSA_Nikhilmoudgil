#include <iostream>
#include <vector>
using namespace std;
int lastOccur(vector<int> arr, int i, int target)
{
    if(i==arr.size()){
        return -1;
    }
    int idxfound = lastOccur(arr, target, i + 1);
    if (idxfound == -1 && arr[i] == target)
    {
        return i;
    }
    return idxfound;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 3, 5, 6};
    cout << "Index of last Occurance Of target =" << lastOccur(arr, 0, 3) << endl;
    return 0;
}