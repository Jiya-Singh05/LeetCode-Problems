# Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
class Solution:
    def maxDepth(self, s: str) -> int:
        d=maxi=0
        for i in s:
            if i=="(":
                d=d+1
                maxi=max(maxi,d)
            if i==")":
                d=d-1
        return maxi
