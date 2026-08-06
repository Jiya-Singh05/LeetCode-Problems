# Given a string s, return true if s is a good string, or false otherwise.

# A string s is good if all the characters that appear in s have the same number of occurrences
# (i.e., the same frequency).
class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        a={}
        for i in s:
            if i in a:
                a[i]=a[i]+1
            else:
                a[i]=1
        ans=list(a.values())
        for i in ans:
            if i!=ans[0]:
                return False
        return True
