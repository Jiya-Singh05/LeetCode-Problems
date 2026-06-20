# You are given a string s consisting of lowercase English letters and the special characters: *, #, and %.

# Build a new string result by processing s according to the following rules from left to right:

# If the letter is a lowercase English letter append it to result.
# A '*' removes the last character from result, if it exists.
# A '#' duplicates the current result and appends it to itself.
# A '%' reverses the current result.
# Return the final string result after processing all characters in s.
class Solution:
    def processStr(self, s: str) -> str:
        ans=[]
        for i in s:
            if i=='*':
                if ans:
                    ans.pop()
            elif i=='#':ā
                ans=ans+ans
            elif i=='%':
                ans.reverse()
            else:
                ans.append(i)
        return "".join(ans)
        
