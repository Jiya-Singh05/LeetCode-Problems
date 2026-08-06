# Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

# Given a balanced string s, split it into some number of substrings such that:

# Each substring is balanced.
# Return the maximum number of balanced strings you can obtain.
class Solution:
    def balancedStringSplit(self, s: str) -> int:
        b=0
        count=0
        for i in range(len(s)):
            if s[i]=='L':
                b=b+1
            if s[i]=='R':
                b=b-1
            if b==0:
                count=count+1
        return count

        
