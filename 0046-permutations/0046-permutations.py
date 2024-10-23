class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        self.helper(p=[], s=nums, res=res)
        return res    
        
    def helper(self, p, s, res):
        if len(list(s)) == 0:
            res.append(p)
        else:
            for i in range(len(s)):
                self.helper(p + [s[i]], s[0:i] + s[i+1:], res)