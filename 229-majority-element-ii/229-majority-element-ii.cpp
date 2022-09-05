class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        vector<int> ans;
        for(auto num : nums)
        {
            m[num]++;
        }
        int max = INT_MIN;
        int ind = -1;
        for(auto a : m)
        {
            if(a.second > (nums.size() / 3))
            {
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};