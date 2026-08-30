# You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

# Return the shuffled string.

class Solution:
    def restoreString(self, s: str, ind: List[int]) -> str:
        ans=[0]*len(ind)
        for i in range(len(s)):
            ans[ind[i]]=s[i]
        return "".join(ans)
