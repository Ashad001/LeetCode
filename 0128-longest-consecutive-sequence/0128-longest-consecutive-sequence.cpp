class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int count = 0;
        for (auto n : nums) {
            if (s.find(n - 1) == s.end()) {
                int curr = n;
                int st = 1;
                while (s.find(curr + 1) != s.end()) {
                    curr++;
                    st++;
                }
                count = max(count, st);
            }
            
        }
        return count;
        
    }
};