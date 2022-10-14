class Solution {
public:
    vector<vector<int>> ans;

    void Helper(vector<int> &arr, vector<int> &sol, int index, int sum , int target)
    {
        if (index == arr.size())
            return;
    
        if (sum > target)
        {
            return;
        }
        if (sum == target)
        {
            ans.push_back(sol);
            return;
        }
        Helper(arr, sol, index + 1, sum, target);
        sol.push_back(arr[index]);
        Helper(arr, sol, index, sum + arr[index], target);
        sol.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> out;
        Helper(candidates, out,0,0,target);
        return ans;
    }
};