# Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

# An alphanumeric string is a string consisting of lowercase English letters and digits.

class Solution:
    def secondHighest(self, s: str) -> int:
      a=[]
      for i in s:
        if i.isdigit():
            a.append(int(i))
      a=list(set(a))      
      a.sort()      
      if(len(a)==0 or len(a)==1):
        return -1
      return a[-2]          
