class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sorted_s = ''.join(sorted(s))
        sorted_t = ''.join(sorted(t))
        print(sorted_s, sorted_t)
        if sorted_s == sorted_t:
            return True
        return False